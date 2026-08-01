#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    cout<<"\n Enter the number whose Factorial is to be found:";
    cin>>n;
    int facts = fact(n);
    cout<<"\n The Factorial of the number is : "<<facts;
}
