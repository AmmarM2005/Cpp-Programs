//Swap numbers Using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Number A:";
    cin>>a;
    cout<<"Enter Number B:";
    cin>>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"The number A after swap is:"<<a;
    cout<<"\n The number B after swap is:"<<b;
    return 0;
}

