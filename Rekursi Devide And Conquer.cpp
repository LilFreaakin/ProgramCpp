#include <stdio.h>

// Fungsi untuk mencari nilai maksimum dari dua bilangan //
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Fungsi rekursif untuk mencari nilai maksimum dalam sebuah array //
int findMax(int arr[], int left, int right) {
    if (left == right) {
        return arr[left];
    } else {
        int mid = (left + right) / 2;
        int maxLeft = findMax(arr, left, mid); // Rekursi pada setengah kiri array //
        int maxRight = findMax(arr, mid + 1, right); // Rekursi pada setengah kanan array //
        return max(maxLeft, maxRight);
    }
}

int main() {
    int n, i;
    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Masukkan elemen-elemen array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxVal = findMax(arr, 0, n - 1);
    printf("Nilai maksimum dalam array adalah: %d\n", maxVal);
    return 0;
}

// MUHAMMAD AFIIF YUNIARDHI - 22040700048 //
