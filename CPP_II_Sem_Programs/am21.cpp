#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z'))
        {

        switch(ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << ch << " is a vowel.";
                break;
            default:
                cout << ch << " is a consonant.";
        }
    }
    else
        {
        cout << "\n Invalid letter.";
        }

    return 0;
}








