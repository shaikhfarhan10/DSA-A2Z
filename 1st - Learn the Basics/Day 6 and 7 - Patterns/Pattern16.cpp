#include <bits/stdc++.h>
using namespace std;
void printPattern(int n)
{
    char c = 'A';
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c;
        }
        c = c + 1;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printPattern(n);
}