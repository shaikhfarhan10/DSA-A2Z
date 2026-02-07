#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // This is written by me
            if (i == 0)
            {
                cout << "*";
            }
            else if (i == n - 1)
            {
                cout << "*";
            }
            else if (j == 0)
            {
                cout << "*";
            }
            else if (j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            // This is given by Striver
            // if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            // {
            //     cout << "*";
            // }
            // else
            // {
            //     cout << " ";
            // }
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