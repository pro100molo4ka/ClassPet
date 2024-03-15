#include <iostream>
using namespace std;



class Vehicle {
public:
    virtual void SpeedUp() {
        cout << "Vehicle speeding up" << endl;
    }
};

class Bicycle : public Vehicle {
public:
    void SpeedUp() override {
        cout << "Bicycle speeding up" << endl;
    }
};

class Car : public Vehicle {
public:
    void SpeedUp() override {
        cout << "Car speeding up" << endl;
    }
};


int main() {
    Vehicle vehicle;
    vehicle.SpeedUp();
    Car car;
    car.SpeedUp();
    Bicycle bicycle;
    bicycle.SpeedUp();
    return 0;
}