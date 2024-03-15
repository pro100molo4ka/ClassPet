#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string firstName;
    string lastName;
    string group;
    double averageMark;
public:
    Student(string firstName, string lastName, string group, double averageMark) : firstName(firstName), lastName(lastName), group(group), averageMark(averageMark) {}

    virtual int getScholarship() {
        return (averageMark == 5) ? 2000 : 1900;
    }

    virtual ~Student() {}

    string getFirstName() const {
        return firstName;
    };

    string getLastName() const {
        return lastName;
    };
};

class Aspirant : public Student {
private:
    string scientificWork;
public:
    Aspirant(string firstName, string lastName, string group, double averageMark, string scientificWork) : Student(firstName, lastName, group, averageMark), scientificWork(scientificWork) {}

    int getScholarship() override {
        return (averageMark == 5) ? 2500 : 2200;
    }
};

int main() {
    Student* student1 = new Student("John", "Doe", "Group1", 4.5);
    Student* student2 = new Student("Jane", "Smith", "Group2", 5.0);

    Aspirant* aspirant1 = new Aspirant("Alice", "Johnson", "Group3", 4.0, "Research1");
    Aspirant* aspirant2 = new Aspirant("Bob", "Brown", "Group4", 5.0, "Research2");

    Student* students[] = { student1, student2, aspirant1, aspirant2 };

    for (int i = 0; i < 4; i++) {
        cout << "Scholarship for " << students[i]->getFirstName() << " " << students[i]->getLastName() << ": " << students[i]->getScholarship() << endl;
        delete students[i];
    }

    return 0;
}
