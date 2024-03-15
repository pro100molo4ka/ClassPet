#include <iostream>
using namespace std;

class Employee {
public:
    virtual double CalculateSalary() = 0;
};

class Manager : public Employee {
private:
    double salary;

public:
    Manager(double salary) : salary(salary) {}

    double CalculateSalary() override {
        return salary;
    }
};

class Programmer : public Employee {
private:
    double salary;

public:
    Programmer(double salary) : salary(salary) {}

    double CalculateSalary() override {
        return salary;
    }
};

int main() {
    Employee* employees[] = { new Manager(1000), new Programmer(1500) };
    for (Employee* employee : employees) {
       cout << "Salary of employee: " << employee->CalculateSalary() << endl;
        delete employee;
    }
    return 0;
}
