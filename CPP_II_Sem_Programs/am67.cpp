#include <iostream>
using namespace std;

union Student {
    char name[50];
    int rollno;
    float cgpa;
};

int main() {
    Student s;

    cout << "Enter student name: ";
    cin.ignore();
    cin.getline(s.name, 50);
    cout << "You entered Name: " << s.name << endl;

    cout << "Enter roll number: ";
    cin >> s.rollno;
    cout << "You entered Roll Number: " << s.rollno << endl;

    cout << "Enter CGPA: ";
    cin >> s.cgpa;
    cout << "You entered CGPA: " << s.cgpa << endl;

    return 0;
}
