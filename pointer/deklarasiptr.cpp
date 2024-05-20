#include <iostream>
using namespace std;
int main() {
    int a, *ptr;
    ptr = &a;
    *ptr = 100;
    cout << "Nilai dari a : "<< *ptr <<endl;
    return 0;
}