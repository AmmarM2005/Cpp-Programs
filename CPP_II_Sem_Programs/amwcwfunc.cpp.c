#include <iostream>
using namespace std;

// Function to swap two numbers by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two numbers by address
void swapByAddress(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// Function to swap two numbers by reference
void swapByReference(int &ref1, int &ref2) {
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    // Call by Value
    cout << "Before swap (Call by Value): num1 = " << num1 << ", num2 = " << num2 ;
    swapByValue(num1, num2);
    cout << "After swap (Call by Value): num1 = " << num1 << ", num2 = " << num2 ;

    // Call by Address
    cout << "\nBefore swap (Call by Address): num1 = " << num1 << ", num2 = " << num2;
    swapByAddress(&num1, &num2);
    cout << "After swap (Call by Address): num1 = " << num1 << ", num2 = " << num2 ;

    // Call by Reference
    cout << "\nBefore swap (Call by Reference): num1 = " << num1 << ", num2 = " << num2 ;
    swapByReference(num1, num2);
    cout << "After swap (Call by Reference): num1 = " << num1 << ", num2 = " << num2 ;

    return 0;
}
