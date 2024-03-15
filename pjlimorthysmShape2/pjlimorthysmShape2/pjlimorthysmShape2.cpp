#include <iostream>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    double getArea() override {
        return 3.14 * radius * radius;
    }

    double getPerimeter() override {
        return 2 * 3.14 * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double length, double width) : length(length), width(width) {}

    double getArea() override {
        return length * width;
    }

    double getPerimeter() override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double base, double height) : base(base), height(height) {}

    double getArea() override {
        return 0.5 * base * height;
    }

    double getPerimeter() override {
        return base + base + height + height;
    }
};

int main() {
    Shape* shapes[] = { new Circle(5), new Rectangle(10, 5), new Triangle(10, 5) };
    for (Shape* shape : shapes) {
        cout << "The area of the figure: " << shape->getArea() << ", perimeter: " << shape->getPerimeter() << endl;
        delete shape;
    }
    return 0;
}
