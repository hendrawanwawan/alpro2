#include <iostream>
using namespace std;
void selectionSort(int arr[], int size, int& comparisons, int& swaps) {
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            comparisons++;
            if (arr[j] < arr[min_idx]) {min_idx = j;}
        }
        if (min_idx != i) {
            swap(arr[i], arr[min_idx]);swaps++;}
    }
}
int main() {
    int arr[] = {10, 5, 8, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int comparisons = 0;
    int swaps = 0;
    selectionSort(arr, size, comparisons, swaps);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";}
    cout << "\n";
    cout << "Number of comparisons: " << comparisons << "\n";
    cout << "Number of swaps: " << swaps + 1 << "\n";
    return 0;
}