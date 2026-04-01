#include <bits/stdc++.h>
using namespace std;

int fac(int n, int sum)
{
    if (n == 0)
    {
        cout << "The Sum is " << sum << endl;
        return 0;
    }
    fac(n - 1, sum * n);
}

int main()
{
    int n;
    cout << "Enter Your Number : ";
    cin >> n;
    fac(n, 1);
    return 0;
}