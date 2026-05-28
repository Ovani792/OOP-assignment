// Javan Omondi , BCS-03-0084/2025
#include <iostream>

using namespace std;

int main() {
    
    int bookID, dueDate, returnDate;
    int daysOverdue, fineRate, fineAmount;

    
    cout << "Enter Book ID: ";
    cin >> bookID;
    cout << "Enter Due Date (as an integer): ";
    cin >> dueDate;
    cout << "Enter Return Date (as an integer): ";
    cin >> returnDate;

    
    daysOverdue = returnDate - dueDate;

    
    if (daysOverdue <= 0) {
        fineRate = 0;
        daysOverdue = 0; 
    } else if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    fineAmount = daysOverdue * fineRate;

    
    cout << "\n--- Library Fine Details ---" << endl;
    cout << "Book ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << daysOverdue << endl;
    cout << "Fine Rate: Ksh. " << fineRate << " per day" << endl;
    cout << "Total Fine Amount: Ksh. " << fineAmount << endl;

    return 0;
}
