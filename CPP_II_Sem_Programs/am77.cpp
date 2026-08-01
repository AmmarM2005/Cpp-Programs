#include<iostream>
using namespace std;
class Component{
public:
    void basic()
    {
        cout<<"\nIt is a basic Component.";
    }
};
class CPU : public Component{
public:
    void process()
    {
        cout<<"\nIT is a CPU.It process data.";
    }
};
class GPU : public Component{
public:
    void render()
    {
        cout<<"\nIt is a GPU.It renders Graphics.";
    }
};

int main()
{
    CPU myCPU;
    GPU myGPU;
    myCPU.basic();
    myCPU.process();
    myGPU.basic();
    myGPU.render();
    return 0;
}


