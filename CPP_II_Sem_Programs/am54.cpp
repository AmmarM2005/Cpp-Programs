#include <iostream>
using namespace std;
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int mod(int a, int b) {
    return a % b;
}
int main() {
    char op;
    float num1, num2;

    cout << "Operations are: + , - , * , / , % " << endl;
    cout << "Select the Operation: ";
    cin >> op;

    if (op == '%')
    {
        int int1, int2;
        cout << "Enter two integers: ";
        cin >> int1 >> int2;
        cout << "Result: " << mod(int1, int2) << endl;
    }
    else
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        switch (op) {
            case '+':
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Result: " << divide(num1, num2) << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default:
                cout << "Invalid operation!" << endl;
                break;
        }
    }
    return 0;
}

