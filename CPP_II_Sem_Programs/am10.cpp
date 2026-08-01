#include <iostream>
using namespace std;

int main() {
    float c, f;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;
    c = (f-32)*5/9;
    cout<< "\n Temperature in celsius is: " << c ;
    return 0;
}
