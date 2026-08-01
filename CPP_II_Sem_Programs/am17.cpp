#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter Number A (Except Zero): ";
    cin >> a;

    if (a%2 == 0)
    {
        cout << "A is Even";
    }
    else if (a%2!=0)
    {
        cout << "A is Odd";
    }
    else
    {
        cout << "A is Zero";
    }

    return 0;
}
