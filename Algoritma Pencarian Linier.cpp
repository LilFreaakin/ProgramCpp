#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // mengembalikan indeks jika ditemukan
        }
    }
    return -1;  // mengembalikan -1 jika tidak ditemukan
}

int main() {
    int n, key;
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> key;

    int index = linearSearch(arr, n, key);

    if (index != -1) {
        cout << "Elemen ditemukan di indeks: " << index << endl;
    } else {
        cout << "Elemen tidak ditemukan." << endl;
    }

    return 0;
}

// MUHAMMAD AFIIF YUNIARDHI - 22040700048
