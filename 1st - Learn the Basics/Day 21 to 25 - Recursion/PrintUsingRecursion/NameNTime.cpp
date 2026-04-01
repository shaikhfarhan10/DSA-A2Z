#include <bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
    if (i > n)
        return;
    cout << "Shaikh Farhan" << endl;
    print(i + 1, n);
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    print(1, n);
}