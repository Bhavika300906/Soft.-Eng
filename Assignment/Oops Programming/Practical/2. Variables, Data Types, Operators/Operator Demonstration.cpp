#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 15;

    cout << "Arithmetic: " << a + b << endl;
    cout << "Relational: " << (a > b) << endl;
    cout << "Logical: " << (a > 15 && b < 10) << endl;
    cout << "Bitwise: " << (a & b) << endl;

    return 0;
}
