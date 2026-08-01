#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,f;
    cout<<"Enter Marks of Maths:";
    cin>>a;
    cout<<"Enter Marks of Science:";
    cin>>b;
    cout<<"Enter Marks of Social Studies:";
    cin>>c;
    cout<<"Enter Marks of English:";
    cin>>d;
    cout<<"Enter Marks of Hindi:";
    cin>>e;
    f=(a+b+c+d+e)/5;
    cout<<"The average of five subjects is : "<<f;
    return 0;

}


