#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    int comparisons = 0;
    int swaps = 0;
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = n - 1; j > i; j--) {
            comparisons++;
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                swapped = true;
                swaps++;}
        }
        cout << "Iterasi ke " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << "["<<arr[k]<<"]" << " ";}
        cout << endl;
    }
    cout << endl;
    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";}
    cout << endl;
    cout << "Jumlah perbandingan: " << comparisons << endl;
    cout << "Jumlah pertukaran: " << swaps << endl;
}
int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arr[n];
    cout << endl;
    cout << "Masukkan data ke-1: ";
    cin >> arr[0];
    for (int i = 1; i < n; i++) {
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> arr[i];}
    cout << endl;
    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Proses Bubble sort" << endl;
    bubbleSort(arr, n);
    cout << endl; 
    return 0;
}