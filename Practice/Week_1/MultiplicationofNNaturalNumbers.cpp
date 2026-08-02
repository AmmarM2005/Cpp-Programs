#include<iostream>
using namespace std;
int main()
{
    int i, n, mul=1;
    cout<<"Enter the Value of N:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        mul=mul*i;
    }
    cout<<"The Value of N Natural Numbers when multiplied is:"<<mul<<endl;
    return 0;
}
