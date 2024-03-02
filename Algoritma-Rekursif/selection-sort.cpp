#include <iostream>
using namespace std;

void seleksi(int ar[],int user);
void printseleksi(int ar[],int user);

int main() {
    // int ar[] = {73,23,45,30,11,31};
    // int user = sizeof(ar)/sizeof(ar[0]);
    int user;
    cout<<"Masukan jumlah index : ";
    cin >>user;
    int ar[user];
    for ( int a = 0 ; a < user; a++ ) {
        cout << "Nilai index "<< a+1 << "  =  ";
        cin  >> ar[a];
    
    }
    seleksi(ar,user);
    printseleksi(ar,user);
    return 0;
}

void seleksi(int ar[], int user) {
    int a, b, min;
    for( a=0; a < user - 1; a++){
        min = a;
        for ( b = a+1; b < user; b++){
            if (ar[b] < ar[min])
                min = b;
        }
        if (min != a) {
            swap(ar[min],ar[a]);
        }
    }
}

void printseleksi(int ar[],int  user ) {
    cout << "Urutan dari terkecil : \n";
    for (int a = 0; a < user; a++){
        cout << ar[a]<< " ";
    }
}