#include <bits/stdc++.h>
using namespace std;
void printPattern(int n)
{
    // Cheap and Wrong way done by me (combine 2 codes)
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j < n - i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
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