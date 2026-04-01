#include <bits/stdc++.h>
using namespace std;

void armstrongNumber(int n)
{
    int original = n;
    int sum = 0;
    int count = 0;      
    int target = n;

    while (target > 0)
    {
        count++;
        target /= 10;
    }

    target = n;

    while (target > 0)
    {
        int digit = target % 10;
        sum += pow(digit, count);   
        target /= 10;
    }
    
    cout << "The value of the given output : " << sum<< endl;
    
    if (sum == original)
    {
        cout << "Is it a ArmStrong : true ";
    }
    else
    {
        cout << "Is it a ArmStrong : false ";
    }
}

int main()
{
    int n;
    cin >> n;
    armstrongNumber(n);
}