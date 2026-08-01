//WAP to find power of a function without using function

#include<iostream>
using namespace std;
int main()
{
    float exponent ;
    int base , result=1 ;
    for(int i=1 ; i<=exponent ; ++i)
    {
        cout<<"Enter the base : ";
        cin>>base;
        cout<< "Enter the exponent:";
        cin>>exponent;

        if(exponent<0)
        {
          exponent= - exponent;
          for (int i = 1;i<=exponent;++i)
          {
              result*=base;
          }

        }
        else
        {
         for (int i = 1;i<=exponent;++i)
          {
              result*=base;
          }
        }
    }
    cout<<"The answer is "<<result;
    return 0;
}
