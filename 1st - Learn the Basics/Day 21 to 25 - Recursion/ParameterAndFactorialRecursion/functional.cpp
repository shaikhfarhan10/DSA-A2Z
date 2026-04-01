#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n + f(n - 1));
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    f(n);
    cout << "The Sum of the given Number n is " << f(n);
}