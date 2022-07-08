#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

//test change

bool running = true;

int main() {
    float firstNumber;
    string operatorVar;
    float secondNumber;
    float result = 1;
    string restartVar;

    while (running == true) {
        cout << "Enter first number: ";
        cin >> firstNumber;
        
        cout << "Enter the operator: ";
        cin >> operatorVar;

        if (operatorVar == "!") {
            for(int i=1; i<=firstNumber; ++i)
            {
                result *= i;
            }
        }
        else if (operatorVar == "%") {
            result = firstNumber * .01;
        }
        else if (operatorVar == "log10" || operatorVar == "log") {
            result = log10(firstNumber);
        }
        else if (operatorVar == "cos") {    
            result = cos(firstNumber);
        }
        else if (operatorVar == "sin") {
            result = sin(firstNumber);
        }
        else if (operatorVar == "tan") {
            result = tan(firstNumber);
        }
        else if (operatorVar == "2") {
            result = firstNumber * firstNumber;
        }
        else {
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
            else if (operatorVar == "^" || operatorVar == "e^x") {
                result = pow(firstNumber, secondNumber);
            }
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
