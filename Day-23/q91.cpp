#include <iostream>
using namespace std;

int main() {

    char s1[100], s2[100];

    cout << "Enter First String: ";
    cin.getline(s1, 100);

    cout << "Enter Second String: ";
    cin.getline(s2, 100);

    int len1 = 0, len2 = 0;

    while(s1[len1] != '\0')
        len1++;

    while(s2[len2] != '\0')
        len2++;

    if(len1 != len2) {
        cout << "Not Anagram";
        return 0;
    }

    for(int i = 0; i < len1; i++) {

        int count1 = 0, count2 = 0;

        for(int j = 0; j < len1; j++) {

            if(s1[i] == s1[j])
                count1++;

            if(s1[i] == s2[j])
                count2++;
        }

        if(count1 != count2) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram Strings";

    return 0;
}