#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter numbers (enter 0 to stop):\n";
    cin >> num;

    while (num != 0) {
        sum += num;
        cout << "Enter a number: ";
        cin >> num;
    }

    cout << "Sum of all numbers entered: " << sum << endl;

    return 0;
}
