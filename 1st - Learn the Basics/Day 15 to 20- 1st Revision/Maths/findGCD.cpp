#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1;
    int n2;
    cout << "Enter a No. 1 : ";
    cin >> n1;
    cout << "Enter a No. 2 : ";
    cin >> n2;

    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            cout << i;
            break;
        }
    }
}