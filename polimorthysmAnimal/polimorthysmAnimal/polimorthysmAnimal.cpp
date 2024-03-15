#include <iostream>
using namespace std;

class Animal {
public:
    virtual void Sound() {
        cout << "Animal sound" << endl;
    }
};

class Bird : public Animal {
public:
    void Sound() override {
       cout << "Bird sound: chirp chirp chirp" << endl;
    }
};

class Cat : public Animal {
public:
    void Sound() override {
       cout << "Cat sound: meow meow" << endl;
    }
};

int main() {
    Animal animal;
    animal.Sound();
    Bird bird;
    bird.Sound();
    Cat cat;
    cat.Sound();
    return 0;
}