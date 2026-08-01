#include <iostream>
#include <string>
using namespace std;
struct Student {
    string name;
    int rn;
    float marks;
};
int main() {
    Student students[5];
    for (int i = 0; i < 5; ++i) {
        cout << "Enter details for student " << i+1 << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Roll Number: ";
        cin >> students[i].rn;
        cout << "Marks: ";
        cin >> students[i].marks;
    }
    cout << "\nStudent Records:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Student " << i+1 << " Details:" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rn << endl;
        cout << "Marks: " << students[i].marks << endl;
    }

    return 0;
}
