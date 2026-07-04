#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year_of_manufacture;

public:
    void setVehicle(string b, int year) {
        brand = b;
        year_of_manufacture = year;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of Manufacture: " << year_of_manufacture << endl;
    }
};

class Car : public Vehicle {
private:
    int number_of_doors;
    int engine_capacity;

public:
    void setCar(string b, int year, int doors, int engine) {
        setVehicle(b, year);
        number_of_doors = doors;
        engine_capacity = engine;
    }

    void displayCar() {
        displayVehicle();
        cout << "Number of Doors: " << number_of_doors << endl;
        cout << "Engine Capacity: " << engine_capacity << " cc" << endl;
    }
};

int main() {
    Car myCar;

    myCar.setCar("Toyota", 2022, 4, 1800);

    myCar.displayCar();

    return 0;
}  
