//
// Created by ACER on 17/04/2024.
//
#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * faktorial(n-1);
}
int combinasi(int n, int r) {
    if( r <= 0 ) {
        return 1;
    } else {
        return faktorial(n) / (faktorial( r ) * faktorial( n -r ));
    }
}
int main() {
    int r,n;
    cout <<"Masukan Bilangan N : ";
    cin >> n;
    cout <<"Masukan Bilangan R : ";
    cin >> r;
    if( r <= n ) {
        cout << "Nilai Kombinasi C ( " << n << "," << r << ") =  " << combinasi(n,r) << endl;
    } else {
        cout << "Nilai R harus kurang dari atau sama dengan N " << endl;
    }
    return 0;
}