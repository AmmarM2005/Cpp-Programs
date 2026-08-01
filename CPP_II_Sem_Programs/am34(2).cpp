#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1)
    {
        cout << n << "\nis not a prime number.";
        return 0;
    }

    int prime = 1;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime)
    {
        cout << n << "\nis a prime number.";
    }
    else
    {
        cout << n << "\nis not a prime number.";
    }

    return 0;
}

