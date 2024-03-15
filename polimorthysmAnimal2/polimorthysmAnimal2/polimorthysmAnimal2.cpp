#include <iostream>
using namespace std;

class Animal {
public:
    virtual void move() = 0;
    virtual void makeSound() = 0;
};

class Bird : public Animal {
public:
    void move() override {
       cout << "The bird is flying" << endl;
    }

    void makeSound() override {
       cout << "Chirp chirp chirp" << endl;
    }
};

class Panthera : public Animal {
public:
    void move() override {
        cout << "\nThe panther is stalking" << endl;
    }

    void makeSound() override {
        cout << "r-r-r-r-r!" << endl;
    }
};

int main() {
    Animal* animals[] = { new Bird, new Panthera };
    for (Animal* animal : animals) {
        animal->move();
        animal->makeSound();
        delete animal;
    }
    return 0;
}
