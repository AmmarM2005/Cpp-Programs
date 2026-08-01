#include<iostream>
using namespace std;
int main() {
    int n,sum=0;
    cout << "Enter the number of terms: ";
    cin >> n;
    int i=1;
    while (i <=n)
    {
        sum=sum+i;
        i++;
    }
    cout << "\nThe sum of " << n << " natural number is: " << sum;
    return 0;
}

