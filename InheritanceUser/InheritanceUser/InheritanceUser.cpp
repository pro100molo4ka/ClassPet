#include <iostream>
#include <string>

using namespace std;

class User {
private:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }

    string getName() const {
        return name;
    }

    void setAge(int a) {
        age = a;
    }

    int getAge() const {
        return age;
    }
};

class Worker : public User {
private:
    int salary;

public:
    void setSalary(int s) {
        salary = s;
    }

    int getSalary() const {
        return salary;
    }
};

class Driver : public Worker {
private:
    int experience;
    char category;

public:
    
    Driver(int exp, char cat) : experience(exp), category(cat) {}

 
};

int main() {
 


    Worker ivan;
    ivan.setName("Ivan");
    ivan.setAge(25);
    ivan.setSalary(1000);
    cout << "\nName: " << ivan.getName() << endl;
    cout << "Age: " << ivan.getAge() << endl;
    cout << "Salary: " << ivan.getSalary() << endl;

    Worker vasya;
    vasya.setName("Vasya");
    vasya.setAge(26);
    vasya.setSalary(2000);
    cout << "\nName: " << vasya.getName() << endl;
    cout << "Age: " << vasya.getAge() << endl;
    cout << "Salary: " << vasya.getSalary() << endl;

    int averageSalary = (ivan.getSalary() + vasya.getSalary()) / 2;

    cout << "\nMiddle salary: " << averageSalary << endl;

    return 0;
}
