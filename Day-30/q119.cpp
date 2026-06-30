#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    int id[n];
    string name[n];
    float salary[n];

    for (int i = 0; i < n; i++) {

        cout << "\nEmployee " << i + 1 << endl;

        cout << "ID: ";
        cin >> id[i];

        cout << "Name: ";
        cin >> name[i];

        cout << "Salary: ";
        cin >> salary[i];
    }

    cout << "\nEmployee Details\n";

    for (int i = 0; i < n; i++) {

        cout << id[i] << " "
             << name[i] << " "
             << salary[i] << endl;
    }

    int searchID;

    cout << "\nEnter Employee ID: ";
    cin >> searchID;

    bool found = false;

    for (int i = 0; i < n; i++) {

        if (id[i] == searchID) {

            cout << "\nEmployee Found\n";

            cout << "ID: " << id[i] << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Salary: " << salary[i] << endl;

            found = true;
            break;
        }
    }

    if (!found)
        cout << "Employee Not Found";

    return 0;
}