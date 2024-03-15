#include <iostream>
using namespace std;

class Shape {
public:
    virtual double CalculationArea() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    double CalculationArea() override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double length, double width) : length(length), width(width) {}

    double CalculationArea() override {
        return length * width;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double base, double height) : base(base), height(height) {}

    double CalculationArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    Shape* shapes[] = { new Circle(5), new Rectangle(10, 5), new Triangle(10, 5) };
    for (Shape* shape : shapes) {
        cout << "The area of the figure: " << shape->CalculationArea() << endl;
        delete shape;
    }
    return 0;
}
