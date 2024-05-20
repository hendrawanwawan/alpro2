#include <iostream>
using namespace std;
void tuker(int *a, int *b) {
    int kosong;
    kosong = *a;
    *a = *b;
    *b = kosong;
}
int main() {
    int x = 5, y = 10;
    cout << "sebelum ditukar : x = " << x <<", y = " << y << "\n";
    tuker(&x,&y);
    cout << "Setelah ditukar : x = " << x <<", y = " << y << "\n";
    return 0;
}
