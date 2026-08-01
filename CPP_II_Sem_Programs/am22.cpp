#include<iostream>
using namespace std;

int main() {
    char op;
    int a, b;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter integer number A: ";
    cin >> a ;
    cout << "Enter integer number B: ";
    cin >> b ;
    switch(op)
    {
        case '+':
            cout << "Result: " << a + b;
            break;
        case '-':
            cout << "Result: " << a - b;
            break;
        case '*':
            cout << "Result: " << a * b;
            break;
        case '/':
                cout << "Result: " << a / b;
            break;
        case '%':
                cout<<"Result: "<<a%b;
            break;
        default:
            cout << "Invalid operator.";
    }

    return 0;
}
