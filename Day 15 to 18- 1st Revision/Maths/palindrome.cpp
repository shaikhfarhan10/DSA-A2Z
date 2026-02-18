#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int original = n;
    int reverse;

    while (n > 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    cout << (original == reverse ? "It is Palindrome" : "It is not a Palindrome");
}