#include <iostream>
using namespace std;

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    bool visited[256] = {false};

    for (char ch : s) {
        if (!visited[ch]) {
            cout << ch;
            visited[ch] = true;
        }
    }

    return 0;
}