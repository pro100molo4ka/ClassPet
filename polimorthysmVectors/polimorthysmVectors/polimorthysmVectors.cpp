#include <iostream>
using namespace std;

class Vector {
private:
    int x, y;

public:
    Vector(int x, int y) : x(x), y(y) {}

    int getX() { return x; }
    int getY() { return y; }

    int operator*(Vector other) {
        return x * other.x + y * other.y;
    }
};

int main() {
    Vector a(2, 2), b(3, 4);
    cout << "a * b = " << a * b << endl;
    return 0;
}