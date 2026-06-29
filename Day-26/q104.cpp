#include <iostream>
using namespace std;

int main() {

    int score = 0;
    char ans;

    cout << "Q1. Capital of India?\n";
    cout << "a) Delhi\nb) Mumbai\nc) Chennai\nd) Kolkata\n";
    cin >> ans;

    if(ans == 'a' || ans == 'A')
        score++;

    cout << "\nQ2. 5 + 7 = ?\n";
    cout << "a)10\nb)11\nc)12\nd)13\n";
    cin >> ans;

    if(ans == 'c' || ans == 'C')
        score++;

    cout << "\nQ3. C++ is a?\n";
    cout << "a) Language\nb) Browser\nc) OS\nd) Game\n";
    cin >> ans;

    if(ans == 'a' || ans == 'A')
        score++;

    cout << "\nFinal Score = " << score << "/3";

    return 0;
}