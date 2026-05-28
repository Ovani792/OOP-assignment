#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int marks;
    double attendance;
    string scholarship;

    
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Exam Marks (0-100): ";
    cin >> marks;
    cout << "Enter Attendance Percentage (0-100): ";
    cin >> attendance;

    
    if (marks >= 70) {
        if (attendance >= 80) {
            scholarship = "Full Scholarship";
        } else {
            scholarship = "Partial Scholarship";
        }
    } 
    else if (marks >= 50 && marks <= 69) {
        if (attendance >= 85) {
            scholarship = "Partial Scholarship";
        } else {
            scholarship = "No Scholarship";
        }
    } 
    else {
        scholarship = "No Scholarship";
    }

    
    cout << "\n--- Scholarship Result ---" << endl;
    cout << "Student Name: " << name << endl;
    cout << "Scholarship Status: " << scholarship << endl;

    return 0;
}