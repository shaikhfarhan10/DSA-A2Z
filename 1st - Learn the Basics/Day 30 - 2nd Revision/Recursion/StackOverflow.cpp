#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    cout << n;
    f(n);
}

int main()
{
    int n;
    cout << "Enter Your Number : ";
    cin >> n;
    f(n);
}