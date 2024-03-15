#include <iostream>
using namespace std;

class Rational {
private:
    int numerator;
    int denominator;

public:
    Rational(int numerator, int denominator) : numerator(numerator), denominator(denominator) {}


    void print() {
       cout << numerator << "/" << denominator << endl;
    }

    Rational operator+(Rational other) {
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Rational(newNumerator, newDenominator);
    }

    Rational operator*(Rational other) {
        int newNumerator = numerator * other.numerator;
        int newDenominator = denominator * other.denominator;
        return Rational(newNumerator, newDenominator);
    }
};

int main() {
    Rational a(1, 2), b(3, 4);
    Rational result = a + b;
    result.print();
    result = a * b;
    result.print();
    return 0;
}