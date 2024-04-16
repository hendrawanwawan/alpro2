//
// Created by ACER on 17/04/2024.
//
#include <iostream>
using namespace std;
int fib(int n) {
    if(n <= 1 ) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main() {
    int batas;
    cout << "Masukan nilai batas : " ;
    cin  >>batas;

    for(int i = 1; fib(i) <= batas; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;
    return 0;
}