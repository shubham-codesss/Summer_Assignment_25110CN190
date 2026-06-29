#include <iostream>
using namespace std;

int main() {

    int choice;
    double balance = 10000, amount;

    do {

        cout << "\n1. Check Balance";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Balance = " << balance << endl;
                break;

            case 2:
                cout << "Enter Amount: ";
                cin >> amount;
                balance += amount;
                cout << "Deposit Successful\n";
                break;

            case 3:
                cout << "Enter Amount: ";
                cin >> amount;

                if(amount <= balance) {
                    balance -= amount;
                    cout << "Withdraw Successful\n";
                }
                else
                    cout << "Insufficient Balance\n";

                break;

            case 4:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while(choice != 4);

    return 0;
}