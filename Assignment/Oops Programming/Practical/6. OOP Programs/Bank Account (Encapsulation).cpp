//2) Bank Account (Encapsulation)
#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() { balance = 1000; }

    void deposit(float amt) { balance += amt; }
    void withdraw(float amt) { balance -= amt; }

    void showBalance() {
        cout << "Balance = " << balance;
    }
};

int main() {
    BankAccount b;
    b.deposit(500);
    b.showBalance();
    return 0;
}
