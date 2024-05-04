//
// Created by ACER on 27/03/2024.
//

#include <iostream>
using namespace std;

#define love "nothing"
//#define

#ifdef love
#define ada "i have crush but i dont wanna be relationship"
#else
#define ada "i dont have crush"
#endif

#ifndef alone
#define me "i focus in my major"
#else
#define me "i dont focus in my major"
#endif

int main() {
    cout << ada << endl;
    cout << me << endl;


    return 0;
}





////#define debug
//#define masuk
//#ifdef debug
//ifdef digunakan untuk apabila program ini sudah didefiniskan atau tidak
//    cout << " program ini dijalankan ketika debug itu truee "<<endl;
////#define Ada "debug ada"
////cout << Ada << endl ;
//#else
//cout << " Program ini djialankan ketika debug itu false /n";
////#define Ada "debug tidak ada"
////cout << Ada << endl;
//#endif
//
//#ifndef masuk
//cout << "program ini dijalakan ketika masuk itu true";
//#else
//cout << "program ini dijalankan ketika masuk itu false " ;
//#endif