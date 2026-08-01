#include <iostream>
using namespace std;
void swap(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int num1, num2;

    cout << "\n Enter the first number: ";
    cin >> num1;
    cout << "\n Enter the second number: ";
    cin >> num2;

    cout << "\n Before swapping: num1 = " << num1 << ", num2 = " << num2;

    swap(&num1, &num2);

    cout << "\n After swapping: num1 = " << num1 << ", num2 = " << num2 ;

    return 0;
}
