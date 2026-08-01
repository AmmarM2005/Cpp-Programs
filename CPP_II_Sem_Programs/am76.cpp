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
class SComponent : public Component,public Feature{
public:
    void special()
    {
        cout<<"\nIT is a special Component.";
    }
};

int main()
{
    SComponent myComponent;
    myComponent.basic();
    myComponent.extra();
    myComponent.special();
    return 0;
}

