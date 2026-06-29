#include <iostream>
#include <cstring>
using namespace std;

int main() {

    int n;

    cout << "Enter number of names: ";
    cin >> n;
    cin.ignore();

    char name[20][100], temp[100];

    for(int i = 0; i < n; i++) {
        cout << "Enter name: ";
        cin.getline(name[i], 100);
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {

            if(strcmp(name[i], name[j]) > 0) {

                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    cout << "\nSorted Names:\n";

    for(int i = 0; i < n; i++)
        cout << name[i] << endl;

    return 0;
}