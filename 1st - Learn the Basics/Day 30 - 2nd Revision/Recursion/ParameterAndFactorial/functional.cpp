#include <bits/stdc++.h>
using namespace std;

int func(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n + func(n - 1));
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    func(n);
    cout << "The Sum of the given Number " << func(n) << endl;
}