//
// Created by ACER on 15/05/2024.
//
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void insertionSort(int arr[], int n, int& comparisons, int& shifts) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        comparisons++; // Menghitung jumlah perbandingan

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            shifts++; // Menghitung jumlah pergeseran
        }
        arr[j + 1] = key;

        // Menampilkan iterasi
        cout << "Iterasi ke " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << "[" << arr[k] << "]" << " ";
        }
        cout << endl;
    }
}

int main() {
    int o, comparisons = 0, shifts = 0;
    cout << "Masukkan jumlah elemen array: ";
    cin >> o;
    cin.ignore(); // Menghapus newline dari buffer input

    int arr[o];

    for (int i = 0; i < o; i++) {
        cout << "Masukkan elemen array: "<< i + 1 <<" : ";
        cin >>arr[i];
    }

    cout << "Array awal:" << endl;
    for (int i = 0; i < 0; i++) {
        cout <<"[" <<arr[i] <<"]"<< " ";
    }
    cout << endl;

    cout << "Proses Insert Sort:" << endl;
    insertionSort(arr, o, comparisons, shifts);
    cout << endl;

    cout << "Array setelah diurutkan:" << endl;
    for (int i = 0; i < o; i++) {
        cout <<"["<<arr[i]<<"]" << " ";
    }
    cout << endl;

    cout << "Jumlah perbandingan: " << comparisons << endl;
    cout << "Jumlah pergeseran: " << shifts << endl;

    return 0;
}