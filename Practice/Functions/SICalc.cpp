#include <iostream>
using namespace std;
float calcSI(float p,float t,float r)
{

    float SI=(p*t*r)/100;
    return SI;
}

int main()
{
    float p,t,r;
    cout<<"==========================This is a simple Interest Calculator in C++==========================\n";
    cout<<"Pls Enter the Principal Amount:\n";
    cin>>p;
    cout<<"Pls Enter the Time Period:\n";
    cin>>t;
    cout<<"Pls enter the Rate of Interest:\n";
    cin>>r;
    float interest = calcSI(p,t,r);
    cout<<"The Calculated Simple Interest is:\n"<<interest;
    return 0;
    }

