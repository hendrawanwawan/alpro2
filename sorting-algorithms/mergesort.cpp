//
// Created by ACER on 15/05/2024.
//
#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r, int &comparisons, int &shifts) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        comparisons++;
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int l, int r, int &comparisons, int &shifts) {
    if (l < r) {

        // Temukan titik tengah
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m, comparisons, shifts);
        mergeSort(arr, m + 1, r, comparisons, shifts);
        merge(arr, l, m, r, comparisons, shifts);
    }
}

int main() {
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Array awal: "; // Tampilkan array awal
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int comparisons = 1;
    int shifts = 0;

    mergeSort(arr, 0, n - 1, comparisons, shifts);

    cout << "Hasil Marge Sortnya: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl<<endl;

    cout << "Jumlah perbandingan: " << comparisons << endl;
    cout << "Jumlah pertukaran: " << shifts << endl;

    delete[] arr;

    return 0;
}