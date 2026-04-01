#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size of an Array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the Number of which counter you want : " << endl;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << hash[arr[number]] << endl;
    }
}

/*
we can declare arr size 10 to the power 6 if it is locally scoped
but we can declare arr size 10 to the power 7 if it is globally scoped
*/