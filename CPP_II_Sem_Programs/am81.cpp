#include <iostream>
using namespace std;
class Adding {
public:

    int add(int a, int b) {
        return a + b;
    }


    double add(double a, double b)
    {
        return a + b;
    }
    double add(int a, double b)
    {
        return a + b;
    }

    double add(double a, int b)
    {
        return a + b;
    }
};

int main() {
    Adding calc;
    int int1, int2;
    double double1, double2;
    cout<<"Enter two integer number : ";
    cin>>int1>>int2;
    cout<<"Enter two double number : ";
    cin>>double1>>double2;

    cout << "\nAddition of two integers: " << calc.add(int1, int2);
    cout << "\nAddition of two doubles: " << calc.add(double1, double2);
    cout << "\nAddition of an integer and a double: " << calc.add(int1, double2);
    cout << "\nAddition of a double and an integer: " << calc.add(double1, int2);

    return 0;
}
