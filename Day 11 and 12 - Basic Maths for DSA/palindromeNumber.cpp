#include <bits/stdc++.h>
using namespace std;

int palindromeNumber(int n)
{
    int original = n;
    int reverse = 0;
    while (n > 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    
    int palindromecheck = reverse;
    if (palindromecheck == original)
    {
        cout << "Is it a Palindrome : true ";
    }
    else
    {
        cout << "Is it a Palindrome : false ";
    }
}

int main()
{
    int n;
    cout << "Enter a number (Check wheather it is a Palindrome or not) : ";
    cin >> n;
    palindromeNumber(n);
}