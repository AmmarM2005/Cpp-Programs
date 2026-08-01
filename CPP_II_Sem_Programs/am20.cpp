#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter a Number :";
    cin >> a;
    cout << "Enter another Number :";
    cin >> b;
    if (a>b)
        {
            cout << a << " is largest." << endl;
        }
    else
        {
            cout << b << " is largest." << endl;
        }
    return 0;
}
