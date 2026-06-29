#include <iostream>
using namespace std;

int main() {

    string name, phone, email;

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Phone Number: ";
    getline(cin, phone);

    cout << "Enter Email: ";
    getline(cin, email);

    cout << "\n----- Contact Details -----\n";
    cout << "Name  : " << name << endl;
    cout << "Phone : " << phone << endl;
    cout << "Email : " << email << endl;

    return 0;
}