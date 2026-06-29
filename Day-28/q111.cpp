#include <iostream>
using namespace std;

int main() {

    string name, source, destination;
    float fare;

    cout << "Enter Passenger Name: ";
    getline(cin, name);

    cout << "Enter Source: ";
    getline(cin, source);

    cout << "Enter Destination: ";
    getline(cin, destination);

    cout << "Enter Ticket Fare: ";
    cin >> fare;

    cout << "\n----- Ticket -----\n";
    cout << "Passenger  : " << name << endl;
    cout << "From       : " << source << endl;
    cout << "To         : " << destination << endl;
    cout << "Fare       : " << fare << endl;

    return 0;
}