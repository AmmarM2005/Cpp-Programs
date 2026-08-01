#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Prime numbers up to " << n << " are: ";
    for (int i = 2; i <= n; i++)
    {
        int prime = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            cout << i << " ";
        }
    }
    cout <<"\n";

    return 0;
}
