#include <iostream>
using namespace std;

int globalVar = 10;

void show() {
    int localVar = 5;
    cout << "Global: " << globalVar << endl;
    cout << "Local: " << localVar << endl;
}

int main() {
    show();
    return 0;
}
