//Write a C program that:
//Takes an integer N as input.
//Finds the sum of all even numbers from 1 to N.
//Prints the final sum.

#include<iostream>
using namespace std;
int main()
{
    int i,n, sum=0;
    cout<<"Enter the Value of N: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    cout<<"The sum of N even Numbers is:"<<sum<<endl;
}
