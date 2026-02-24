#include <bits/stdc++.h>
using namespace std;

void f(int n, int count)
{
    if (count == 10)
        return;

    cout << n << endl;
    f(n + 1, count + 1);
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    f(n, 0);
}
