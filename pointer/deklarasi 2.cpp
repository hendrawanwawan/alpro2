#include <iostream>
using namespace std;
int main() {
    int array[5], *ptr;
    for (int i=0; i < 5; i++) {
        array[i] = i+1;
    }
    ptr = array;
    for (int i=0; i < 5; i++) {
        cout << "Nilai dari array["<< i << "] adalah " << *(ptr + i )<<endl;
    }
    return 0;
}


/* INI DIGUNAKAN KETIKA INGIN MELIHAT ALAMAT MEMORI DARI ARRAY no 7 modul
 * int main() {
    int array[5], *ptr;
    for (int i=0; i < 5; i++) {
        array[i] = i+1;
    }
    ptr = array;
    for (int i=0; i < 5; i++) {
        cout << "Nilai dari array["<< i << "] adalah " << (ptr + i )<<endl;
    }
    return 0;
}*/
