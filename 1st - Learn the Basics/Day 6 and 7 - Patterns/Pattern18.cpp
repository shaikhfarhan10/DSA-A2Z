#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    // char c = 'A';
    for (int i = 0; i <= n; i++)
    {
        for (char c = 'Z' - i; c <= 'Z'; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printPattern(n);
}