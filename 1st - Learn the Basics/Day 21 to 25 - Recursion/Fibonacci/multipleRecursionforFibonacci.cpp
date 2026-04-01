#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    if (n <= 1)
        return n;
    int last = f(n - 1);
    int slast = f(n - 2);
    return last + slast;
}

int main()
{
    int n;
    cout << "Enter a Number to Find How many time Fibonacci is Done : ";
    cin >> n;
    cout << f(n);
    return 0;
}