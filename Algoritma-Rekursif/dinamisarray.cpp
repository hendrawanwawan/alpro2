#include <iostream>
using namespace std;

int main() {
    int jumlaharray;
    cout <<"Masukan jumlah : ";
    cin >>jumlaharray;
    int array[jumlaharray];
    cout <<endl;


    for (int i = 0; i < jumlaharray; i++){
        cout <<"Masukan nilai array : "<< i + 1  <<" = ";
        cin  >> array[i];
    }
    return 0;

}