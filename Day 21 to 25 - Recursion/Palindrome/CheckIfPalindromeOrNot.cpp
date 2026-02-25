#include <bits/stdc++.h>
using namespace std;

bool f(int n, string &s)
{
    if (n >= s.length() / 2)
        return true;
    if (s[n] != s[s.length() - n - 1])
        return false;
    return f(n + 1, s);
}

void fs(int n, string &s)
{
    if (n >= s.length() / 2)
    {
        cout << "The given string is Palindrome ";
        return;
    }
    if (s[n] != s[s.length() - n - 1])
    {
        cout << "The given string is not a palindrome";
        return;
    }
    return fs(n + 1, s);
}

int main()
{
    string n;
    cout << "Enter a Word : ";
    cin >> n;
    // The given f function is giving the value in bool
    // f(0, n);
    fs(0, n);
    return 0;
}