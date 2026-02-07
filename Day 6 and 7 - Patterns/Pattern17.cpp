#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        char c = 'A';
        int breakpoint = (2*i+1)/2;
        for (int j =1; j <= 2 * i + 1; j++)
        {
            cout << c;
            if(j<=breakpoint) c++;
            else c--;
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
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