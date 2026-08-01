#include<iostream>
using namespace std;
void PValue(int* p) {
    cout << "\n Value accessed through pointer: " << *p;
}
int main() {
    int num ;
    cout<<"Enter the number:";
    cin>>num;
    int* p = &num;
    PValue(p);
    return 0;
}
