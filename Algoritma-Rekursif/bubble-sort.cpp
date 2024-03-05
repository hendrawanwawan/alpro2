#include <iostream>
using namespace std;

void gelembung(int ar[], int n) {
    int flag;
    for(int a = 0; a < n -1; a++) {
        flag=0;
        for( int b=0; b <n-1-a; b++) {
            if ( ar[b] > ar[b+1]) {
                swap(ar[b], ar[b+1]);
                flag =1;
            }
        }
        if (flag == 0 )
            break;
    }
}
void printfgelembung(int ar[], int n){
    for(int a=0; a < n; a++) {
        cout << ar[a]<< " ";
    }
}


int main() {
    // int ar[] = {23,21,24,26,19};
    // int n = sizeof(ar)/sizeof(ar[0]);
    // gelembung(ar,n);
    // printfgelembung(ar,n);
    
    int n;
    cout<<"Masukan jumlah index : ";
    cin >>n;
    int ar[n];
    for ( int a = 0 ; a < n; a++ ) {
        cout << "Nilai index "<< a+1 << "  =  ";
        cin  >> ar[a];
    
    }
    gelembung(ar,n);
    printfgelembung(ar,n);
    return 0;
}


