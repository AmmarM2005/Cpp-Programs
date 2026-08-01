#include <iostream>
using namespace std;

int main() {
    int dnum;

    cout<<"The first day of the week is Monday:";
    cout << "\nEnter a number \n1 for Monday,\n2 for Tuesday,\n3 for Wednesday,\n4 for Thursday,\n5 for Friday,\n6 for Saturday ,\n7 for Sunday \n: ";
    cin >> dnum;

    switch(dnum) {
        case 1:
            cout << "\n Monday";
            break;
        case 2:
            cout << "\n Tuesday";
            break;
        case 3:
            cout << "\n Wednesday";
            break;
        case 4:
            cout << "\n Thursday";
            break;
        case 5:
            cout << "\n Friday";
            break;
        case 6:
            cout << "\n Saturday";
            break;
        case 7:
            cout << "\n Sunday";
            break;
        default:
            cout << "\n Invalid input";
    }

    return 0;
}

