#include<iostream>
using namespace std;
int main() {
    int num,f=1;
    cout << "Enter a number whose factorial is to found: ";
    cin >> num;
    while (num >0)
    {
        f *= num;
        num--;
    }
    cout << "\n Factorial is: " << f;
    return 0;
}

