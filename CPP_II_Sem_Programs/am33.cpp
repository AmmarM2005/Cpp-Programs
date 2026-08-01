#include <iostream>
using namespace std;

int main() {
    int n, f = 0, s = 1, c;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            cout << f << " ";
        } else if (i == 2)
        {
            cout << s << " ";
        } else {
            c = f + s;
            f = s;
            s = c;
            cout << c << " ";
        }
    }
    return 0;
}
