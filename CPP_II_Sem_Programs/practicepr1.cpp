#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number of natural numbers you want to print:-";
    cin>>n;
    int i=1;
    while(n>0)
    {
        sum=n+1;
        n--;
    }
    cout<<"the sum of n natural numbers:"<<sum;
}
