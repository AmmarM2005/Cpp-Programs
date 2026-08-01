#include<iostream>
using namespace std;
class Base
{
public:
    virtual void print()
    {
        cout<<"\n Base Function";
    }
};
class Derived:public Base
{
public:
    void print() override
    {
        cout<<"\n Derived Function";

    }
};
int main()
{
    Derived derivedf;
    Base*base1=&derivedf;
    base1->print();
    return 0;
}
