#include <iostream>
using namespace std;

int main() {

    float m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "Enter marks of 5 subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    cout << "\nTotal = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    if(percentage >= 90)
        cout << "Grade A";
    else if(percentage >= 75)
        cout << "Grade B";
    else if(percentage >= 60)
        cout << "Grade C";
    else if(percentage >= 40)
        cout << "Grade D";
    else
        cout << "Fail";

    return 0;
}