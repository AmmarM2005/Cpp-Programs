#include<iostream>
using namespace std;
int nsum(int a , int b)
{
    int sum = a+b ;
    return sum;
}
int main()
{
    int p , q;
    cout<<"\n Enter the First Number:";
    cin>>p;
    cout<<"\n Enter the Second Number:";
    cin>>q;
    int sum= nsum(p,q);
    cout<<"\n The Sum of the numbers is "<<sum;
    return 0;
}
