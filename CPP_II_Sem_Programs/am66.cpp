#include <iostream>
using namespace std;

struct rec {
    char n[50];
    int r;
    float c;
};

int main() {
    rec r;

    cout << "\nEnter student name: ";
    cin.getline(r.n, 50); // Read the name

    cout << "\nEnter roll no.: ";
    cin >> r.r;

    cin.ignore(); // Clear the newline character left in the buffer

    cout << "\nEnter CGPA: ";
    cin >> r.c;

    cout << "\nYou have entered....";
    cout << "\nName: " << r.n;
    cout << "\nRoll No.: " << r.r;
    cout << "\nCGPA: " << r.c << endl;

    return 0;
}

