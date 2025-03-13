#include <iostream>
using namespace std;

// Ham sinh day nhi phan bang thuat toan quay lui
void generateBinary(int n, int arr[], int index) {
    // Neu da tao du n bit, in day nhi phan
    if (index == n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i];
        }
        cout << endl;
        return;
    }

    // Quay lui: thu voi 0 o vi tri index
    arr[index] = 0;
    generateBinary(n, arr, index + 1);

    // Quay lui: thu voi 1 o vi tri index
    arr[index] = 1;
    generateBinary(n, arr, index + 1);
}

int main() {
    int n;

    // Nhap do dai day nhi phan
    cout << "Nhap do dai cua day nhi phan: ";
    cin >> n;

    // Mang de luu tru day nhi phan
    int arr[n];

    // Goi ham sinh day nhi phan bat dau tu vi tri 0
    generateBinary(n, arr, 0);

    return 0;
}

