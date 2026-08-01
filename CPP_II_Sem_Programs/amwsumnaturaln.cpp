#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    // Check if n is a positive integer
    if (n <= 0) {
        cout << "\n Please enter a positive integer.";
        return 1;
    }

    // Calculate the sum of the first n natural numbers
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "\n The sum of the first " << n << " natural numbers is: " << sum;

    return 0;
}
