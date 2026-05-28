// Javan Omondi , BCS-03-0084/2025
#include <iostream>
using namespace std;

void getEmployeeDetails(string &name, float &basicSalary, int &overtimeHours);
float calculateOvertimePay(int overtimeHours, float ratePerHour);
float calculateNetSalary(float basicSalary, float overtimePay);
void displayPayslip(string name, float basicSalary, float overtimePay, float netSalary);

int main() {
    string name;
    float basicSalary, overtimePay, netSalary;
    int overtimeHours;

    getEmployeeDetails(name, basicSalary, overtimeHours);

    overtimePay = calculateOvertimePay(overtimeHours, 500);

    netSalary = calculateNetSalary(basicSalary, overtimePay);

    displayPayslip(name, basicSalary, overtimePay, netSalary);

    return 0;
}

void getEmployeeDetails(string &name, float &basicSalary, int &overtimeHours) {
    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}

float calculateOvertimePay(int overtimeHours, float ratePerHour) {
    return overtimeHours * ratePerHour;
}

float calculateNetSalary(float basicSalary, float overtimePay) {
    return basicSalary + overtimePay;
}

void displayPayslip(string name, float basicSalary, float overtimePay, float netSalary) {
    cout << "\n===== PAYSLIP =====" << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Overtime Pay: " << overtimePay << endl;
    cout << "Net Salary: " << netSalary << endl;
}