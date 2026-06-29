#include <iostream>
using namespace std;

int main() {

    string name;
    double balance, amount;

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "\nEnter Deposit Amount: ";
    cin >> amount;
    balance += amount;

    cout << "Enter Withdraw Amount: ";
    cin >> amount;

    if(amount <= balance)
        balance -= amount;
    else
        cout << "Insufficient Balance\n";

    cout << "\n----- Account Details -----\n";
    cout << "Name    : " << name << endl;
    cout << "Balance : " << balance << endl;

    return 0;
}