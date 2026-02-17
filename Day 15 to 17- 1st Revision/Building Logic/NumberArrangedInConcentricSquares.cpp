#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {

            int top = i;
            int bottom = j;
            int up = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, bottom), min(up, down)));
        }
        cout << endl;
    }
}