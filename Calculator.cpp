#include <iostream>
using namespace std;

int main() {
    float firstNumber;
    cout << "Enter first number: ";
    cin >> firstNumber;

    string operatorVar;
    cout << "Enter the operator: ";
    cin >> operatorVar;

    float secondNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;

    float result;
    if (operatorVar == "x" || operatorVar == "x") {
        result = firstNumber * secondNumber;
    }

    cout << result;

    return 0;
}