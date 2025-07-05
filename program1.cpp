#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int speed;

public:
    // Constructor to initialize the car
    Car(string b, int s) {
        brand = b;
        speed = s;
    }

    // Public method providing an abstract interface
    void displayDetails() {
        cout << "Car Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }

    // Public method to accelerate the car
    void accelerate(int increase) {
        speed += increase;
        cout << "New Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar("Toyota", 100);

    myCar.displayDetails(); // Abstract interface
    myCar.accelerate(20);   // Hiding internal workings

    return 0;
}
