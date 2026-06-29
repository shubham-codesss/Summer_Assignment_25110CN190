#include <iostream>
using namespace std;

int main() {

    char str[100], ch;

    cout << "Enter String: ";
    cin.getline(str, 100);

    cout << "Enter Character: ";
    cin >> ch;

    int count = 0;

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] == ch)
            count++;
    }

    cout << "Frequency = " << count;

    return 0;
}