#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char str[100];

    cout << "Enter String: ";
    cin.getline(str, 100);

    int choice;

    do {

        cout << "\n1. Length";
        cout << "\n2. Reverse";
        cout << "\n3. Uppercase";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Length = " << strlen(str);
                break;

            case 2: {
                char temp[100];
                strcpy(temp, str);

                strrev(temp);

                cout << "Reverse = " << temp;
                break;
            }

            case 3:
                for(int i = 0; str[i] != '\0'; i++) {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        cout << char(str[i] - 32);
                    else
                        cout << str[i];
                }
                break;

            case 4:
                cout << "Exit";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 4);

    return 0;
}