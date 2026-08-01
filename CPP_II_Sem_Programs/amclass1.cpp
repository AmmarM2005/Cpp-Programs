#include<iostream>
using namespace std;
class ToyCar {
public:
    // Attributes
    int wheels;
    string color;
    int speed;

    // Methods
    void drive() {
        // Code to drive the car
        cout << "The car is driving at " << speed << " mph." << std::endl;
    }

    void stop() {
        // Code to stop the car
        cout << "The car has stopped." << std::endl;
    }

    void honk() {
        // Code to honk the car
        cout << "Beep! Beep!" << std::endl;
    }
};
int main() {
    // Creating an object of ToyCar class
    ToyCar myCar;

    // Setting attributes
    myCar.wheels = 4;
    myCar.color = "red";
    myCar.speed = 10;

    // Using methods
    myCar.drive();
    myCar.honk();
    myCar.stop();

    return 0;
}

