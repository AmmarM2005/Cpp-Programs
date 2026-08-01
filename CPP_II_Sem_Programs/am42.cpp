#include<iostream>
using namespace std;

int main() {
    int n, rnum = 0, r,sum=0;
    cout << "Enter the number: ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        rnum = rnum * 10 + r;
        n = n / 10;
        sum=sum+r;
    }
    cout << "\nThe sum of digits of is: " << sum;
    return 0;
}
