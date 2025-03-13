#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<int>& arr, vector<int>& current, int start) {
    // In ra tap con hien tai
    cout << "{";
    for (int i = 0; i < current.size(); i++) {
        cout << current[i];
        if (i != current.size() - 1) cout << ", ";
    }
    cout << "}" << endl;

    // Duyet qua cac phan tu tu vi tri start
    for (int i = start; i < arr.size(); i++) {
        current.push_back(arr[i]);  // Chon phan tu arr[i] vao tap con
        backtrack(arr, current, i + 1);  // Tiep tuc tim cac tap con voi phan tu tiep theo
        current.pop_back();  // Bo phan tu vua chon ra khoi tap con
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 6, 7};  // Tap hop cho truoc
    vector<int> current;  // Tap con hien tai
    backtrack(arr, current, 0);  // Goi ham quay lui de sinh cac tap con
    return 0;
}

