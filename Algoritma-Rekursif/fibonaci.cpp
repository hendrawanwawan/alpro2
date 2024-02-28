#include <iostream>

using namespace std;

int fib0 = 0;
int fib1 = 1;
void fib(int n) {
    if (n < 3 ) {
        return;
    }
    int fb = fib0 + fib1;
    fib0 = fib1;
    fib1 = fb;
    cout <<fb<<" ";
    return fib(n-1);
}

void hasilfib(int n) {
    if (n < 1) {
        cout <<"Anda menambahkan inputan yang salah";
    }
    else if(n == 1 ){
        cout <<"0";
    }
    else if(n == 2) {
        cout <<"0 1";
    }
    else {
        cout <<"0 1 ";
        fib(n);
    }
}

int main() {
    int n;
    cout <<"Masukan fibonaci number = ";
    cin >>n;
    hasilfib(n);
    return 0;
}