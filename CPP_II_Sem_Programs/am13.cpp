#include<iostream>
using namespace std;
int main()
{
  int n,r,t=0;
  cout<<"enter Any 5 digit no.:";
  cin>>n;
  r=n%10;
  n = n/10;
  t=t + r;
  r=n%10;
  n = n/10;
  t=t + r;
  r=n%10;
  n = n/10;
  t=t + r;
  r=n%10;
  n = n/10;
  t=t + r;
  r=n%10;
  n = n/10;
  t=t + r;
  cout<<"\nThe sum of digits of number is "<<t;
}



