#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    
    void inputStudentData() {
        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);

        cout << "Enter Fee Balance: ";
        cin >> feeBalance;
    }

    
    void makePayment() {
        double payment;

        cout << "Enter Amount Paid: ";
        cin >> payment;

        if (payment <= feeBalance)
            feeBalance -= payment;
        else {
            cout << "Payment exceeds fee balance!" << endl;
        }
    }

    
    void displayStatus() {
        cout << " Student Fee Status " << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main() {
    Student st;

    st.inputStudentData();
    st.makePayment();
    st.displayStatus();

    return 0;
}