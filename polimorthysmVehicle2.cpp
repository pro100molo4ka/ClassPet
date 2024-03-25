#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() = 0;
    virtual void stopEngine() = 0;
};

class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Запускаем двигатель автомобиля" << endl;
    }

    void stopEngine() override {
        cout << "Останавливаем двигатель автомобиля" << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    void startEngine() override {
        cout << "Запускаем двигатель мотоцикла" << endl;
    }

    void stopEngine() override {
        cout << "Останавливаем двигатель мотоцикла" << endl;
    }
};

int main() {

    setlocale(LC_ALL, "RU"); 
    system("chcp 1251");

    Vehicle* vehicles[] = { new Car, new Motorcycle };
    for (Vehicle* vehicle : vehicles) {
        vehicle->startEngine();
        vehicle->stopEngine();
        delete vehicle;
    }
    return 0;
}