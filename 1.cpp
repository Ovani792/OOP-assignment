#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double accountBalance;

public:
    // Constructor
    BankAccount(string name, int number, double balance) {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;
        cout << "Account successfully created" << endl;
    }

    // Member function to display account details
    void displayAccount() {
        cout << "\n===== Account Details =====" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number     : " << accountNumber << endl;
        cout << "Account Balance    : $" << accountBalance << endl;
        cout << "===========================" << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "\nAccount closed successfully" << endl;
    }
};

int main() {
    // Create an object of BankAccount
    BankAccount myAccount("John Doe", 123456, 5000.00);

    // Display account details
    myAccount.displayAccount();

    return 0;
}