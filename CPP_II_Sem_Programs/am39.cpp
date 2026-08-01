#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the Number:";
    cin>>n;
    int i=1;
    while(i<=10)
    {
        sum=n+sum;
        cout<<"\n"<<n<<" X "<<i<<"="<<sum;
        i++;
    }
}
