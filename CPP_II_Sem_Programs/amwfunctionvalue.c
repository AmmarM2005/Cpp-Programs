#include <iostream>
using namespace std;

// Function declaration
void increment(int x) {
    x++; // Increment the local copy of x
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 5;
    cout << "Before function call: " << num << endl;
    increment(num); // Calling function by value
    cout << "After function call: " << num << endl; // num remains unchanged
    return 0;
}
