#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the Number A: ";
    cin >> a;
    cout << "Enter the Number B: ";
    cin >> b;
    cout << "Enter the Number C: ";
    cin >> c;

    if (a >= b && a >= c) {
        cout << "A is the largest" << endl;
    } else if (b >= a && b >= c) {
        cout << "B is the largest" << endl;
    } else if (c >= a && c >= b) {
        cout << "C is the largest" << endl;
    } else {
        cout << "All are equal" << endl;
    }

    return 0;
}

