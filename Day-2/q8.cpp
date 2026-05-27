#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0;
    cout << "Enter a number:";
    cin >> n;
    int org = n;
    while (n > 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (org == rev)
    {
        cout << rev << " is palindrome.";
    }
    else
        cout << n << " is not a palindrome.";
    return 0;
}