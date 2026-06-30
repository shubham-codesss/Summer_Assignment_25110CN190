#include <iostream>
using namespace std;

const int MAX = 100;

int roll[MAX];
string name[MAX];
float marks[MAX];

int total = 0;

void addStudent() {

    cout << "\nRoll: ";
    cin >> roll[total];

    cout << "Name: ";
    cin >> name[total];

    cout << "Marks: ";
    cin >> marks[total];

    total++;
}

void displayStudents() {

    if (total == 0) {
        cout << "\nNo Records\n";
        return;
    }

    cout << "\nStudent List\n";

    for (int i = 0; i < total; i++) {

        cout << "\nRoll : " << roll[i];
        cout << "\nName : " << name[i];
        cout << "\nMarks: " << marks[i] << endl;
    }
}

void searchStudent() {

    int r;

    cout << "\nEnter Roll Number: ";
    cin >> r;

    for (int i = 0; i < total; i++) {

        if (roll[i] == r) {

            cout << "\nRecord Found\n";

            cout << "Roll : " << roll[i] << endl;
            cout << "Name : " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;

            return;
        }
    }

    cout << "Record Not Found";
}

int main() {

    int choice;

    do {

        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            cout << "Thank You!";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}