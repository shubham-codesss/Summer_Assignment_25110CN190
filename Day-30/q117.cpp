#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int roll[n];
    string name[n];
    float marks[n];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Roll: ";
        cin >> roll[i];

        cout << "Name: ";
        cin >> name[i];

        cout << "Marks: ";
        cin >> marks[i];
    }

    cout << "\nStudent Records\n";

    for (int i = 0; i < n; i++) {
        cout << "\nRoll : " << roll[i];
        cout << "\nName : " << name[i];
        cout << "\nMarks: " << marks[i] << endl;
    }

    return 0;
}