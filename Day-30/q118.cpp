#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of books: ";
    cin >> n;

    string book[n];

    for (int i = 0; i < n; i++) {
        cout << "Book " << i + 1 << ": ";
        cin >> book[i];
    }

    cout << "\nBooks Available\n";

    for (int i = 0; i < n; i++)
        cout << book[i] << endl;

    string searchBook;

    cout << "\nEnter book to search: ";
    cin >> searchBook;

    bool found = false;

    for (int i = 0; i < n; i++) {

        if (book[i] == searchBook) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Book Found";
    else
        cout << "Book Not Found";

    return 0;
}