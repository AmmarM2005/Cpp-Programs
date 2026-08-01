#include <iostream>
using namespace std;
int lno(int no) {
    if ((no % 4 == 0 && no % 100 != 0) || (no % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int no;
    cout << "Enter a no: ";
    cin >> no;

    if (lno(no)) {
        cout << no << " is a leap no." << endl;
    } else {
        cout << no << " is not a leap no." << endl;
    }

    return 0;
}

