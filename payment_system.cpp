#include <iostream>
using namespace std;

class Payment {
public:
    
    void processPayment(int amount) {
        cout << "Cash Payment -> Final Amount: KSh " << amount << endl;
    }

    
    void processPayment(int amount, double fee) {
        double final = amount + fee;
        cout << "Card Payment -> Final Amount: KSh " << final << endl;
    }

   
    void processPayment(int amount, double fee, double discount) {
        double final = amount + fee - discount;
        cout << "Mobile Payment -> Final Amount: KSh " << final << endl;
    }
};

int main() {
    Payment p;

    p.processPayment(1000);           
    p.processPayment(1000, 25.5);     
    p.processPayment(1000, 25.5, 50); 

    return 0;
}