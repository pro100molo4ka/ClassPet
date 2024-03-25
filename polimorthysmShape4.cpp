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
       cout << "Рисуем круг радиусом " << radius << endl;
    }

    double CalculationArea() override {
        return 3.14 * radius * radius;
    }
};

class Cylinder : public Shape {
private:
    double radius;
    double height;

public:
    Cylinder(double radius, double height) : radius(radius), height(height) {}

    void draw() override {
        cout << "Рисуем цилиндр радиусом " << radius << " и высотой " << height << endl;
    }

    double CalculationArea() override {
        return 2 * 3.14 * radius * radius + 2 * 3.14 * radius * height;
    }
};

int main() {

    setlocale(LC_ALL, "RU"); 
    system("chcp 1251");

    Shape* shapes[] = { new Circle(5), new Cylinder(5, 10) };
    for (Shape* shape : shapes) {
        shape->draw();
       cout << "Площадь фигуры: " << shape->CalculationArea() << endl;
        delete shape;
    }
    return 0;
}
