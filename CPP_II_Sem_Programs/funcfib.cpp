#include <iostream>
using namespace std;
int fibonacci(int n) {
    int first = 0, second = 1, next;

    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    for (int i = 2; i <= n; ++i) {
        next = first + second;
        first = second;
        second = next;
    }
    return next;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series is : ";
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
