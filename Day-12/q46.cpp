#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n)
{
    int temp = n;
    int digits = 0;
    int sum = 0;

    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp > 0)
    {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int n;
    cin >> n;

    if(isArmstrong(n))
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}