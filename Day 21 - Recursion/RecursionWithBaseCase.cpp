#include <bits/stdc++.h>
using namespace std;

void f(int n, int count)
{
    if (count == 10)
        return;

    cout << count << endl;
    f(n, count + 1);
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    f(n, 0);
}