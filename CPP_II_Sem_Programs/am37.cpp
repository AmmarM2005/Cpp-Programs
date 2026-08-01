#include<iostream>
using namespace std;

int main()
{
    int n, rnum = 0, r;
    cout << "Enter a Five digit number please: ";
    cin >> n;
    if (n < 10000 || n > 99999)
    {
        cout << "Please enter a valid five digit number." << endl;
        return 1;
    }
    else
    {
         while (n > 0)
         {
             r = n % 10;
             rnum = rnum * 10 + r;
             n = n / 10;
         }
    }

    cout << "\nThe reverse is: " << rnum;
    return 0;
}
