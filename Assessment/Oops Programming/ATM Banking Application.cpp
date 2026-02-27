#include <iostream>
#include <ctime>
using namespace std;

class ATM {
private:
    int pin;
    long balance;
    string accountHolder;
    string branch;
    long long accountNumber;

public:
    ATM() {
        pin = 12345;
        balance = 20000;
        accountHolder = "Bhavika Sonule";
        branch = "Ahmedabad Branch";
        accountNumber = 9876543210;
    }

    void showDateTime() {
        time_t now = time(0);
        char* dt = ctime(&now);
        cout << "                Current Date & Time:\n";
        cout << "                " << dt << endl;
    }

    void welcomeScreen() {
        cout << "\n\n";
        cout << "                =====================================\n";
        cout << "                        WELCOME TO ATM\n";
        cout << "                =====================================\n";
        showDateTime();
        cout << "                Press 1 to Access Account via PIN\n";
        cout << "                Press 0 to Get Help\n";
        cout << "                =====================================\n";
    }

    void displayAccountDetails() {
        cout << "\n\n";
        cout << "                =====================================\n";
        cout << "                     ACCOUNT DETAILS\n";
        cout << "                =====================================\n";
        cout << "                Account Holder : " << accountHolder << endl;
        cout << "                Account Number : " << accountNumber << endl;
        cout << "                Branch         : " << branch << endl;
        cout << "                Available Bal. : Rs. " << balance << endl;
        cout << "                =====================================\n";
    }

    void helpScreen() {
        cout << "\n\n";
        cout << "                =====================================\n";
        cout << "                     ATM ACCOUNT STATUS\n";
        cout << "                =====================================\n";
        cout << "                You must have the correct PIN number.\n";
        cout << "                Contact bank during working hours.\n";
        cout << "                Thank you for visiting!\n";
        cout << "                =====================================\n";
    }

    bool checkPin() {
        int enteredPin;
        cout << "\n\n";
        cout << "                Enter ATM PIN (Only one attempt): ";
        cin >> enteredPin;

        if (enteredPin == pin) {
            displayAccountDetails();   // Show account info
            return true;
        } else {
            cout << "\n";
            cout << "                =====================================\n";
            cout << "                           THANK YOU\n";
            cout << "                Incorrect PIN! No more attempts.\n";
            cout << "                =====================================\n";
            return false;
        }
    }

    void mainMenu() {
        int choice;
        do {
            cout << "\n\n";
            cout << "                =====================================\n";
            cout << "                         ATM MAIN MENU\n";
            cout << "                =====================================\n";
            cout << "                1 - Deposit Cash\n";
            cout << "                2 - Withdraw Cash\n";
            cout << "                3 - Balance Inquiry\n";
            cout << "                0 - Exit ATM\n";
            cout << "                =====================================\n";
            cout << "                Enter choice: ";
            cin >> choice;

            switch (choice) {
                case 1: deposit(); break;
                case 2: withdraw(); break;
                case 3: checkBalance(); break;
                case 0:
                    cout << "\n                Thank you for using ATM!\n";
                    break;
                default:
                    cout << "\n                Invalid Choice!\n";
            }

        } while (choice != 0);
    }

    void deposit() {
        long amount;
        cout << "\n";
        cout << "                ATM ACCOUNT DEPOSIT\n";
        cout << "                Current Balance: Rs. " << balance << endl;
        cout << "                Enter amount to deposit: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "                New Balance: Rs. " << balance << endl;
        } else {
            cout << "                Invalid Amount!\n";
        }
    }

    void withdraw() {
        long amount;
        cout << "\n";
        cout << "                ATM ACCOUNT WITHDRAWAL\n";
        cout << "                Current Balance: Rs. " << balance << endl;
        cout << "                Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "                Insufficient Balance!\n";
        } else if (amount > 0) {
            balance -= amount;
            cout << "                Please collect your cash.\n";
            cout << "                Remaining Balance: Rs. " << balance << endl;
        } else {
            cout << "                Invalid Amount!\n";
        }
    }

    void checkBalance() {
        cout << "\n";
        cout << "                BALANCE INQUIRY\n";
        cout << "                Account Holder : " << accountHolder << endl;
        cout << "                Balance        : Rs. " << balance << endl;
    }
};

int main() {
    ATM atm;
    int choice;

    atm.welcomeScreen();
    cout << "\n                Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        if (atm.checkPin()) {
            atm.mainMenu();
        }
    } else if (choice == 0) {
        atm.helpScreen();
    } else {
        cout << "\n                Invalid option!\n";
    }

    return 0;
}
