#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0;
    cout << "Enter a number:";
    cin >> n;
    int original = n;
    while (n > 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (original == rev)
    {
        cout << original << " is a palindrome";
    }
    return 0;
}