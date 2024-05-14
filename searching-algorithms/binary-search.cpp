#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearchMin(const vector<int>& arr, int& comparisons) {
    int start = 0;
    int end = arr.size() - 1;
    int mid;

    while (start <= end) {
        comparisons++;
        mid = start + (end - start) / 2;
        if (mid == 0 || (arr[mid] < arr[mid - 1])) {
            return arr[mid];
        } else {
            end = mid - 1;
        }
    }
    return arr[0];  //
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << "\nArray yang diinput: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int comparisons = 0;
    int minValue = binarySearchMin(arr, comparisons);

    cout << "Nilai minimum yang ditemukan: " << minValue << endl;
    cout << "Jumlah perbandingan yang dilakukan: " << comparisons << endl;

    return 0;
}





//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//string data[10];
//int n;
//
//int binarySearch(string a[], int n, string x) {
//    int start = 0;
//    int end = n - 1;
//    while (start <= end) {
//        int mid = start + (end - start) / 2;
//        if (x == a[mid]) return mid;
//        else if (x < a[mid]) end = mid - 1;
//        else if (x > a[mid]) start = mid + 1;
//    }
//    return -1;
//}
//
//int input() {
//    cout << "Masukkan kapasitas Array a[] (maksimal 10): ";
//    cin >> n;
//    cout << endl;
//    cin.ignore();  // To ignore the newline character after integer input
//    for(int i = 0; i < n; i++) {
//        cout << "Masukkan data ke-" << i + 1 << ": ";
//        getline(cin, data[i]);
//    }
//    cout << endl;
//    return 0;
//}
//
//int tampil() {
//    for(int i = 0; i < n; i++) {
//        cout << data[i];
//        if(i != n - 1) cout << ", ";
//    }
//    cout << "}" << endl;
//    return 0;
//}
//
//int insertionSort() {
//    sort(data, data + n);
//    return 0;
//}
//
//int main() {
//    input();
//    insertionSort();
//    cout << "Data dalam array a[] setelah diurutkan:" << endl;
//    cout << "a[" << n << "]: {";
//    tampil();
//    cout << "Pencarian dengan Binary Search Rekursif:" << endl;
//    cout << "=============================================" << endl;
//    string x;
//    cout << "Masukkan kata atau string yang ingin dicari: ";
//    getline(cin, x);
//    int hasil = binarySearch(data, n, x);
//    if(hasil == -1) {
//        cout << "Hasil: Data tidak ditemukan dalam array...";
//    } else {
//        cout << "Hasil: Data ditemukan...."<<endl;
//        cout<<"indeks: "<<hasil;
//    }
//    return 0;
//}
//
//
//
//
//
//////
////// Created by ACER on 15/05/2024.
//////
////#include <iostream>
////#include <string>
////#include <algorithm>
////using namespace std;
////
////string data[10];
////int n;
////
////int binarySearch(string a[], int n, string x) {
////    int start = 0;
////    int end = n - 1;
////    while (start <= end) {
////        int mid = start + (end - start) / 2;
////        if (x == a[mid]) return mid;
////        else if (x < a[mid]) end = mid - 1;
////        else if (x > a[mid]) start = mid + 1;
////    }
////    return -1;
////}
////
////int input() {
////    cout << "Masukkan kapasitas Array a[]:";
////    cin >> n;
////    cout << endl;
////    for(int i = 0; i < n; i++) {
////        cout << "Masukkan data ke-" << i + 1 << ":";
////        cin >> data[i];
////    }
////    cout << endl;
////    return 0;
////}
////
////int tampil() {
////    for(int i = 0; i < n; i++) {
////        cout << data[i];
////        if(i != n - 1) cout << ",";
////    }
////    cout << "}" << endl;
////    return 0;
////}
////
////int insertionSort() {
////    sort(data, data + n);
////    return 0;
////}
////
////int main() {
////    input();
////    insertionSort();
////    cout << "Data dalam array a[] setelah diurutkan:" << endl;
////    cout << "a [" << n << "]: {";
////    tampil();
////    cout << "Pencarian dengan Binary Search Rekursif:" << endl;
////    cout << "=============================================" << endl;
////    string x;
////    cout << "Masukkan kata atau string yang ingin dicari: ";
////    cin >> x;
////    int hasil = binarySearch(data, n, x);
////    if(hasil == -1) {
////        cout << "Hasil: Data tidak ditemukan dalam array...";
////    } else {
////        cout << "Hasil: Data ditemukan...."<<endl;
////        cout<<"indeks: "<<hasil;
////    }
////    return 0;
////}