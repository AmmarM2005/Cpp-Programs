#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a Year(Except Zero):";
    cin >> a;

    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
    {
        cout << "The Year is a leap year";
    }

    else
    {
        cout << "The Year is Not a leap year";
    }

    return 0;
}
