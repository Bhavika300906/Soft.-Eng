#include <iostream>
using namespace std;

int main() {
    int a = 5;
    float b = 2.5;

    float result1 = a + b;       // Implicit
    int result2 = (int)b;        // Explicit

    cout << "Implicit: " << result1 << endl;
    cout << "Explicit: " << result2;
    return 0;
}
