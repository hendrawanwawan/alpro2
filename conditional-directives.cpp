#include <iostream>
using namespace std;

#define PI 3.14
#define nama "Wawan"
#define panggilan 'W'
#define Print ("HAllO CODERS!!")
#define L(n) PI*n*n


int main() {
    cout<<Print<<endl;
    cout<<"Nama                 : "<<nama<<endl;
    cout<<"Inisial              : "<<panggilan<<endl;
    cout<<"Menghitung Luas lingkaran"<<endl;
    cout<<"Luas lingkaran dengan jari-jari = 2 adalah :  "<<L(2)<<endl;
    cout<<"Luas lingkaran dengan jari-jari = 5 adalah :  "<<L(5)<<endl;

    return 0;
}