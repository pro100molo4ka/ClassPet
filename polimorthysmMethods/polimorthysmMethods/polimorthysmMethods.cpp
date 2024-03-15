#include <iostream>
using namespace std;

class MaxMethods {
public:
    int Max(int a, int b) {
        return (a > b) ? a : b;
    }

    int Max(int a, int b, int c) {
        int max = Max(a, b);
        return Max(max, c);
    }

    int Max(int a, int b, int c, int d) {
        int max = Max(a, b, c);
        return Max(max, d);
    }
};

int main() {
    MaxMethods maxMethods;
    int a = 10, b = 20, c = 30, d = 40;
    cout << "Max of a and b: " << maxMethods.Max(a, b) << endl;
    cout << "Max of a, b and c: " << maxMethods.Max(a, b, c) << endl;
    cout << "Max of a, b, c and d: " << maxMethods.Max(a, b, c, d) << endl;
    return 0;
}