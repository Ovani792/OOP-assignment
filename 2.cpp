#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int numberOfDays;

public:
    // Constructor
    RoomBooking(string name, int room, int days) {
        guestName = name;
        roomNumber = room;
        numberOfDays = days;
        cout << "Room booking confirmed" << endl;
    }

    // Member function to display booking details
    void displayBooking() {
        cout << "\n===== Booking Details =====" << endl;
        cout << "Guest Name      : " << guestName << endl;
        cout << "Room Number     : " << roomNumber << endl;
        cout << "Number of Days  : " << numberOfDays << " days" << endl;
        cout << "===========================" << endl;
    }

    // Destructor
    ~RoomBooking() {
        cout << "\nBooking ended, room released" << endl;
    }
};

int main() {
    // Create an object of RoomBooking
    RoomBooking booking("Jane Smith", 205, 3);

    // Display booking details
    booking.displayBooking();

    return 0;
}