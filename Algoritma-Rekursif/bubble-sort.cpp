#include <iostream>
using namespace std;

void gelembung(int ar[], int n) {
    int flag;
    int swapss = 0;
    for(int a = 0; a < n -1; a++) {
        flag=0;
        for( int b=0; b <n-1-a; b++) {
            if ( ar[b] > ar[b+1]) {
                swap(ar[b], ar[b+1]);
                flag =1;
                swapss++;
            }
        }

        cout << "Iterasi ke " << a + 1 << " : ";
        for (int c = 0 ; c < n; c++) {
            cout << "["<< ar[c] <<"]" << " ";
        }
        cout <<endl;

        if (flag == 0 )
            break;
    }
}
void printfgelembung(int ar[], int n){
    for(int a=0; a < n; a++) {
        cout << ar[a]<< " ";
    }
    cout <<endl;

}


int main() {
    // int ar[] = {23,21,24,26,19};
    // int n = sizeof(ar)/sizeof(ar[0]);
    // gelembung(ar,n);
    // printfgelembung(ar,n);
    //45  23  34  12  22
    int n;
    int swapss;
    cout<<"Masukan jumlah index : ";
    cin >>n;
    int ar[n];
    for ( int a = 0 ; a < n; a++ ) {
        cout << "Nilai index "<< a+1 << "  =  ";
        cin  >> ar[a];
    
    }
    gelembung(ar,n);
    printfgelembung(ar,n);
    cout << " jumlah pertukaran : " << swapss << endl;
    return 0;
}


