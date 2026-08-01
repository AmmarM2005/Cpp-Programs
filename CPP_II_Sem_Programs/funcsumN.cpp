#include <iostream>
using namespace std;
int sumN(int n) {
    if (n == 0)
        return 0;
    else
        return n + sumN(n - 1);
}

int main() {
    int N;
    cout << "Enter the number of terms: ";
    cin >> N;

    int sum = sumN(N);

    cout << "\n Sum of the first " << N << " natural numbers is: " << sum;

    return 0;
}
