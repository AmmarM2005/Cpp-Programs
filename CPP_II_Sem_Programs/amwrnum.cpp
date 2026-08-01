#include <iostream>
using namespace std;

int main() {
    int num, reversedNumber = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }

    cout << "\n The reverse of the number is: " << reversedNumber;

    return 0;
}
