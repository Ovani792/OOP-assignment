#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter admission number: ";
        getline(cin, admissionNumber);
        cout << "Enter fee balance: ";
        cin >> feeBalance;
        cin.ignore();
    }

    void makePayment(double amount) {
        if (amount <= 0) {
            cout << "Invalid payment amount.\n";
        } else if (amount > feeBalance) {
            cout << "Payment exceeds balance.\n";
        } else {
            feeBalance -= amount;
            cout << "Payment of KES " << amount << " processed.\n";
        }
    }

    void displayStatus() {
        cout << "\n--- Student Fee Status ---\n";
        cout << "Name:       " << name << "\n";
        cout << "Adm No:     " << admissionNumber << "\n";
        cout << "Balance:    KES " << feeBalance << "\n";
    }
};

int main() {
    Student student;
    student.inputStudent();

    double payment;
    cout << "Enter payment amount: ";
    cin >> payment;

    student.makePayment(payment);
    student.displayStatus();
    return 0;
}