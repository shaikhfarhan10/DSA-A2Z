#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n)
{
    int reverse = 0;
    while (n > 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    return reverse;
}

int main()
{
    int n;
    if (n != 0)
    {
        cout << "Enter a Number : ";
        cin >> n;
    }
    else
    {
        cout << "Enter a Valid Number : ";
        cin >> n;
    }
    int result = reverseNumber(n);
    cout << result;
}