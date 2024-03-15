#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual double CalculationArea() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    void draw() override {
       cout << "\ndraw a circle with a radius: " << radius << endl;
    }

    double CalculationArea() override {
        return 3.14 * radius * radius;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double side) : side(side) {}

    void draw() override {
       cout << "\ndraw a square with a side: " << side << endl;
    }

    double CalculationArea() override {
        return side * side;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double base, double height) : base(base), height(height) {}

    void draw() override {
       cout << "\ndraw a triangle with a base: " << base << " and height: " << height << endl;
    }

    double CalculationArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    Shape* shapes[] = { new Circle(5), new Square(10), new Triangle(10, 5) };
    for (Shape* shape : shapes) {
        shape->draw();
        cout << "the area of the figure: " << shape->CalculationArea() << endl;
        delete shape;
    }
    return 0;
}
