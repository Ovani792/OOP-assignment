// Javan Omondi , BCS-03-0084/2025
#include <iostream>
using namespace std;

// Function declarations
void getCustomerDetails(string &name, int &unitsConsumed);
float calculateBill(int unitsConsumed, float ratePerUnit);
float applyDiscount(float bill, int unitsConsumed);
void displayBill(string name, int unitsConsumed, float bill, float discount, float finalAmount);

int main() {
    string name;
    int unitsConsumed;
    float bill, discount, finalAmount;

    // Function calls
    getCustomerDetails(name, unitsConsumed);

    bill = calculateBill(unitsConsumed, 20);

    discount = applyDiscount(bill, unitsConsumed);

    finalAmount = bill - discount;

    displayBill(name, unitsConsumed, bill, discount, finalAmount);

    return 0;
}

// Function to get customer details
void getCustomerDetails(string &name, int &unitsConsumed) {
    cout << "Enter customer name: ";
    cin >> name;

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;
}

// Function to calculate bill
float calculateBill(int unitsConsumed, float ratePerUnit) {
    return unitsConsumed * ratePerUnit;
}

// Function to apply discount
float applyDiscount(float bill, int unitsConsumed) {
    if (unitsConsumed > 100) {
        return bill * 0.10;
    } else {
        return 0;
    }
}

// Function to display bill
void displayBill(string name, int unitsConsumed, float bill, float discount, float finalAmount) {
    cout << "\n===== WATER BILL =====" << endl;
    cout << "Customer Name: " << name << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Bill Before Discount: " << bill << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount Payable: " << finalAmount << endl;
}