#include <iostream>
using namespace std;

class Circle {
private:
    double x, y, r;

public:
    Circle() : x(0), y(0), r(1) {}
    Circle(double x, double y, double r) : x(x), y(y), r(r) {}
    Circle(double r) : x(0), y(0), r(r) {}
    Circle(double x, double r) : x(x), y(0), r(r) {}

    void print() {
       cout << "Centre: (" << x << ", " << y << "), radius: " << r << endl;
    }
};

int main() {
    Circle circle1;
    Circle circle2(1, 2, 3);
    Circle circle3(4);
    Circle circle4(5, 6);
    circle1.print();
    circle2.print();
    circle3.print();
    circle4.print();
    return 0;
}