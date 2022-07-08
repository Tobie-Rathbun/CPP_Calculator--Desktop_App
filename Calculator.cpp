#include <iostream>
using namespace std;

//test change

bool running = true;

int main() {
    float firstNumber;
    string operatorVar;
    float secondNumber;
    float result;
    string restartVar;

    while (running == true) {
        cout << "Enter first number: ";
        cin >> firstNumber;
        
        cout << "Enter the operator: ";
        cin >> operatorVar;

        cout << "Enter second number: ";
        cin >> secondNumber;

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

        cout << "Result is: " << result << endl;
        cout << "Again? [y/n]: ";
        cin >> restartVar;

        if (restartVar == "n" || restartVar == "N") {
            running = false;
        }
    }
    return 0;
}
