#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;

public:
    void makeNoise() {
        cout << "Animal noise" << endl;
    }

    void eat() {
        cout << "Animal eats" << endl;
    }

    string getDescription() {
        return "This is an Animal";
    };
    string getName() {
        return name;
    };
    void setName(const string& _name) {
        name = _name;
    }
};

class Dog : public Animal {
public:
    void makeNoise() {
        cout << "Bark" << endl;
    }

    void eat() {
        cout << "Dog food" << endl;
    }

    string getDescription() {
        return "This is a Dog";
    }
};

class Cat : public Animal {
public:
    void makeNoise() {
        cout << "Meow" << endl;
    }

    void eat() {
        cout << "Cat food" << endl;
    }

    string getDescription() {
        return "This is a Cat";
    }
};

class Bear : public Animal {
public:
    void makeNoise() {
        cout << "Roar" << endl;
    }

    void eat() {
        cout << "Fish and berries" << endl;
    }

    string getDescription() {
        return "This is a Bear";
    }
};

class Veterinarian {
public:
    void treatAnimal(Animal animal) {
        cout << "Animal name: " << animal.getName() << endl;
        cout << "Description: " << animal.getDescription() << endl;
    }
};

int main() {
    Dog dog;
    dog.setName ("Rex");
    Cat cat;
    cat.setName ("Whiskers");
    Bear bear;
    bear.setName ("Brownie");

    Veterinarian vet;
    vet.treatAnimal(dog);
    vet.treatAnimal(cat);
    vet.treatAnimal(bear);

    return 0;
}
