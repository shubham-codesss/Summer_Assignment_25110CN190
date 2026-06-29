#include <iostream>
using namespace std;

int main() {

    string bookName, author;
    int bookID;

    cout << "Enter Book ID: ";
    cin >> bookID;

    cin.ignore();

    cout << "Enter Book Name: ";
    getline(cin, bookName);

    cout << "Enter Author Name: ";
    getline(cin, author);

    cout << "\n----- Library Record -----\n";
    cout << "Book ID    : " << bookID << endl;
    cout << "Book Name  : " << bookName << endl;
    cout << "Author     : " << author << endl;

    return 0;
}