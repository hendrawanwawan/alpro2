#include <iostream>
using namespace std;

void insertionsort(int ar[],int n,) {
    int j, temp;
    for(int i = 1; i < n ; i++) {
        temp = ar[i];
        j = i - 1;
        while( j >= 0 && ar[j] > temp) {
            ar[j+1] = ar[j];
            j = j-1;
        }
        ar[j+1] = temp ;
    }
}
void printinsertionsort(int ar[], int n){
    for(int i = 0 ; i < n ; i++) {
        cout << ar[i] <<" ";
    }
}
int main() {
    // int ar[],n;
    // input(ar,n);
    int n;
    cout << "Masukan n index  : ";
    cin  >> n;
    int ar[n];
    for (int i = 0; i < n ; i++) {
        cout << "Masukan nilai index : " << i+1 << " : ";
        cin >>ar[i];
    }
    insertionsort(ar,n,);
    printinsertionsort(ar,n);
    return 0;
}   