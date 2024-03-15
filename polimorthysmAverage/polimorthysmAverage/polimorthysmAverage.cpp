#include <iostream>
using namespace std;


class AverageMethods {
public:
    float Average(int* numbers, int size) {
        float sum = 0;
        for (int i = 0; i < size; i++) {
            sum += numbers[i];
        }
        return sum / size;
    }

    float Average(float* numbers, int size) {
        float sum = 0;
        for (int i = 0; i < size; i++) {
            sum += numbers[i];
        }
        return sum / size;
    }
};

int main() {
    int intNumbers[] = { 1, 2, 3, 4, 5 };
    float floatNumbers[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    AverageMethods averageMethods;
    std::cout << "Arithmetic mean for int: " << averageMethods.Average(intNumbers, 5) << std::endl;
    std::cout << "Arithmetic mean for float: " << averageMethods.Average(floatNumbers, 5) << std::endl;
    return 0;
}