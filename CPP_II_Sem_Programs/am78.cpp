#include<iostream>
using namespace std;
class Component{
public:
    void basic()
    {
        cout<<"\nIt is a basic Component.";
    }
};
class Feature{
public:
    void extra()
    {
        cout<<"\nIt has an extra feature.";
    }
};
class CPU : public Component,public Feature{
public:
    void process()
    {
        cout<<"\nIt is a CPU.It process data.";
    }
};

int main()
{
    CPU myCPU;
    myCPU.basic();
    myCPU.extra();
    myCPU.process();
    return 0;
}



