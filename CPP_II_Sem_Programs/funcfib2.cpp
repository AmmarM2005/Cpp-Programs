#include <iostream>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Fibonacci is not defined ." << std::endl;
    } else {
        int fib = fibonacci(num);
        std::cout << "Fibonacci of " << num << " is: " << fib << std::endl;
    }

    return 0;
}
