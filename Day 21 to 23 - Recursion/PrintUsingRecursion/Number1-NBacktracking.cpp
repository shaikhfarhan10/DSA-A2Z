#include <bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
    if (i == 0)
        return;
    print(i - 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    print(n, n);
}