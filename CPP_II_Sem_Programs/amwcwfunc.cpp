#include <iostream>
using namespace std;

// Function to swap two numbers by value
void sbv(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two numbers by address
void sba(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// Function to swap two numbers by reference
void sbr(int &ref1, int &ref2) {
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main() {
    int num1 , num2 ;
    cout << "\n Before swap (Call by Value): num1 = " << num1 << ", num2 = " << num2 ;
    cout<<"\n A="<<a;
    cout<<"\n A="<<a;
    sbv(num1, num2);
    cout << "\n After swap (Call by Value): num1 = " << num1 << ", num2 = " << num2 ;
    cout << "\n Before swap (Call by Address): num1 = " << num1 << ", num2 = " << num2 ;
    sba(&num1, &num2);
    cout << "\n After swap (Call by Address): num1 = " << num1 << ", num2 = " << num2 ;
    cout << "\n Before swap (Call by Reference): num1 = " << num1 << ", num2 = " << num2 ;
    sbr(num1, num2);
    cout << "\n After swap (Call by Reference): num1 = " << num1 << ", num2 = " << num2 ;

    return 0;
}
