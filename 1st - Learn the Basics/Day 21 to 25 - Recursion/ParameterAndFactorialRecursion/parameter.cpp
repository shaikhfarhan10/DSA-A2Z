#include <bits/stdc++.h>
using namespace std;

int f(int n, int sum)
{
    if (n == 0)
    {
        cout << "The Sum is "<< sum << endl;
    }
    f(n - 1, sum + n);
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    f(n, 0);
}