#include <iostream>
using namespace std;
int faktorial(int n) {
    if (n <= 1 ) {
        cout <<n;
        return n;
    }
    else {
        cout<< n <<"*";
        return n * faktorial(n - 1);
    }
}
int main() {
    int angka,hasil;
    cout <<"Masukkan angka :  ";
    cin >>angka;
    hasil = faktorial(angka);
    cout <<"\nHasil dari faktorial = "<< hasil <<endl;
    return 0;
}