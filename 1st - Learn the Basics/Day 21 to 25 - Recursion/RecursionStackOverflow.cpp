#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    cout << "1";
    f(n);
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    f(n);
}