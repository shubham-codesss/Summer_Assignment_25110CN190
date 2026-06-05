#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n)
{
    int original = n;
    int temp = n;
    int digits = 0;
    int sum = 0;

    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int start, end;
    cout << "Enter range: ";
    cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        if (isArmstrong(i))
            cout << i << " ";
    }

    return 0;
}