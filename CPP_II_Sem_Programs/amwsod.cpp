#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is negative
    if (num < 0) {
        num = -num; // Make it positive
    }

    while (num > 0) {
        // Extract the last digit
        digit = num % 10;
        // Add the digit to the sum
        sum += digit;
        // Remove the last digit
        num /= 10;
    }

    cout << "The sum of all digits of the number is: " << sum << endl;

    return 0;
}
