#include <bits/stdc++.h>
using namespace std;

void f(int n, string &p)
{
    if (n >= p.length() / 2)
    {
        cout << "The Given String is Palindrome";
        return;
    }

    if (p[n] != p[p.length() - n - 1])
    {
        cout << "The Given String is not Palindrome";
        return;
    }
    f(n + 1, p);
}

int main()
{
    string p;
    cout << "Enter your String : ";
    cin >> p;

    f(0, p);
    return 0;
}