#include <iostream>
#include <string>

using namespace std;

class Shape {
protected:
    string color;

public:
    Shape(string _color) : color(_color) {}

    virtual void draw() {
        cout << "Drawing a shape with color " << color << endl;
    }
};

class Circle : public Shape {
private:
    int x, y, radius;

public:
    Circle(string _color, int _x, int _y, int _radius) : Shape(_color), x(_x), y(_y), radius(_radius) {}

    void draw() override {
        cout << "Drawing a circle with color " << color << " at (" << x << ", " << y << ") and radius " << radius << endl;
    }
};

class Rectangle : public Shape {
private:
    int x1, y1, x2, y2;

public:
    Rectangle(string _color, int _x1, int _y1, int _x2, int _y2) : Shape(_color), x1(_x1), y1(_y1), x2(_x2), y2(_y2) {}

    void draw() override {
        cout << "Drawing a rectangle with color " << color << " from (" << x1 << ", " << y1 << ") to (" << x2 << ", " << y2 << ")" << endl;
    }
};

int main() {
    const int num_shapes = 2;
    Shape* shapes[num_shapes];

    Circle circle("blue", 3, 5, 10);
    Rectangle rectangle("red", 1, 2, 8, 6);

    shapes[0] = &circle; 
    shapes[1] = &rectangle; 

    for (int i = 0; i < num_shapes; i++) {
        shapes[i]->draw();
    }
    return 0;
}
