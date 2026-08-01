#include<iostream>
using namespace std;
int main()
{
    int a , b;
    cout<<"Enter the Age of Student A:";
    cin>>a;
    cout<<"Enter the Age of Student B:";
    cin>>b;
    if(a>b)
    {
        cout<<"A is older than B";
    }
    if(b>a)
    {
        cout<<"B is older than A";
    }
    else
    {
        cout<<"Both are of equal age";
    }
    return 0;
}

