//1) Calculator Class

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a,int b){ return a+b; }
    int sub(int a,int b){ return a-b; }
    int mul(int a,int b){ return a*b; }
    float divi(int a,int b){ return (float)a/b; }
};

int main() {
    Calculator c;
    cout << c.add(10,5);
    return 0;
}
