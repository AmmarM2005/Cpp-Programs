#include<iostream>
using namespace std;
int main()
 {
    int num, sum = 0;
    cout << "Enter a number (enter 0 to stop): ";
    cin >> num;
    while (num != 0) {
        sum += num;
        cout << "Enter another number (enter 0 to stop): ";
        cin >> num;
    }

    cout << "\nThe sum of the numbers entered is: " << sum << endl;
    return 0;
}

