//1) Simple Calculator Using Functions
#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float divi(int a, int b) { return (float)a / b; }

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition: " << add(x,y) << endl;
    cout << "Subtraction: " << sub(x,y) << endl;
    cout << "Multiplication: " << mul(x,y) << endl;
    cout << "Division: " << divi(x,y);

    return 0;
}
