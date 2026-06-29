#include <iostream>
using namespace std;

int main() {

    int id, quantity;
    float price;
    string product;

    cout << "Enter Product ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, product);

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price: ";
    cin >> price;

    cout << "\n----- Inventory -----\n";
    cout << "Product ID   : " << id << endl;
    cout << "Product Name : " << product << endl;
    cout << "Quantity     : " << quantity << endl;
    cout << "Price        : " << price << endl;

    return 0;
}