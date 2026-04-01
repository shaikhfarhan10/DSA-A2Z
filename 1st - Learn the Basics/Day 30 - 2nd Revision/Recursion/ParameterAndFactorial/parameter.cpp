#include <bits/stdc++.h>
using namespace std;

void para(int n, int sum)
{
    if (n == 0)
    {
        cout << "The Sum is " << sum << endl;
    }
    para(n - 1, sum + n);
}

int main()
{
    int n;
    cout << "Enter a Number : " << endl;
    cin >> n;
    para(n, 0);
}