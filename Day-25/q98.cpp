#include <iostream>
using namespace std;

int main() {
    char s1[100], s2[100];

    cout << "Enter first string: ";
    cin.getline(s1, 100);

    cout << "Enter second string: ";
    cin.getline(s2, 100);

    cout << "Common Characters: ";

    for(int i = 0; s1[i] != '\0'; i++) {

        bool printed = false;

        for(int p = 0; p < i; p++) {
            if(s1[p] == s1[i]) {
                printed = true;
                break;
            }
        }

        if(printed)
            continue;

        for(int j = 0; s2[j] != '\0'; j++) {
            if(s1[i] == s2[j]) {
                cout << s1[i] << " ";
                break;
            }
        }
    }

    return 0;
}