//3) Inheritance Example
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void input() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : public Person {
public:
    void show() {
        cout << "Student Name: " << name;
    }
};

int main() {
    Student s;
    s.input();
    s.show();
    return 0;
}

