#include<iostream>
using namespace std;

int main() {
    int n, rnum = 0, r;
    cout << "Enter the number: ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        rnum = rnum * 10 + r;
        n = n / 10;
    }

    cout << "\nThe reverse is: " << rnum;
    return 0;
}


