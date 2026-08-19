    #include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
    Calculator calc;

    cout << "Addition: " << calc.add(10, 5) << endl;
    cout << "Subtraction: " << calc.subtract(10, 5) << endl;
    cout << "Multiplication: " << calc.multiply(10, 5) << endl;
    cout << "Division: " << calc.divide(10, 5) << endl;
    return 0;
}