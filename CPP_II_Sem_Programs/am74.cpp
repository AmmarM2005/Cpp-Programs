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
int main()
{
    CPU myCPU;
    myCPU.basic();
    myCPU.process();
    return 0;
}
