#include <iostream>
using namespace std;

int main() {

    int choice;
    float a, b;

    do {

        cout << "\n1. Add";
        cout << "\n2. Subtract";
        cout << "\n3. Multiply";
        cout << "\n4. Divide";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch(choice) {

            case 1:
                cout << "Answer = " << a + b;
                break;

            case 2:
                cout << "Answer = " << a - b;
                break;

            case 3:
                cout << "Answer = " << a * b;
                break;

            case 4:
                if(b != 0)
                    cout << "Answer = " << a / b;
                else
                    cout << "Division by zero not possible.";
                break;

            case 5:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 5);

    return 0;
}