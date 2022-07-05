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
    if (operatorVar == "x" || operatorVar == "*") {
        result = firstNumber * secondNumber;
    }
    else if (operatorVar == "/") {
        result = firstNumber / secondNumber;
    }
    else if (operatorVar == "-") {
        result = firstNumber - secondNumber; 
    }
    else if (operatorVar == "+") {
        result = firstNumber + secondNumber;
    }

    cout << "Result is: " << result;

    return 0;
}