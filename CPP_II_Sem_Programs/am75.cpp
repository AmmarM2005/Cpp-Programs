#include<iostream>
using namespace std;
class Component{
public:
    void basic()
    {
        cout<<"\nIt is a basic Component.";
    }
};
class CPU:public Component{
public:
    void process()
    {
        cout<<"\nIt is a CPU.It process data.";
    }
};
class ACPU:public CPU{
public:
    void advanced()
    {
        cout<<"\nIt is a advanced CPU with more cores.";
    }
};
int main()
{
    ACPU myadvancedCPU;
    myadvancedCPU.basic();
    myadvancedCPU.process();
    myadvancedCPU.advanced();
    return 0;
}

