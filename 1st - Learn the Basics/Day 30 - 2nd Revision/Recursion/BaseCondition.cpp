#include <bits/stdc++.h>
using namespace std;

void f(int n, int count)
{
    if (count <= 10)
        return;

    cout << n;
    f(n, count++);
}

int main()
{
    int n;
    cout << "Enter Your Number : ";
    cin >> n;
    f(n, 0);
}