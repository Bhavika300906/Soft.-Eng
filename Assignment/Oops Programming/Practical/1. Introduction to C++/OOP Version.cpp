#include <iostream>
using namespace std;

class Rectangle {
public:
    float length, width;

    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    void area() {
        cout << "Area = " << length * width;
    }
};

int main() {
    Rectangle r;
    r.input();
    r.area();
    return 0;
}

