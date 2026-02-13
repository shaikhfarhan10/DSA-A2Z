#include <bits/stdc++.h>
using namespace std;

void countDigit(int n)
{
    // This is code by me
    // Its time complexity is logn
    int count = 0;
    while (n > 0)
    {
        n = n / 10;   
        count++;      
    }

    cout << count;

    // This is code by Striver
    // Its time complexity is log10
    // int countn = (int)(log10(n) + 1);
    // cout << countn;
}

int main()
{
    int n;
    cin >> n;
    countDigit(n);
}