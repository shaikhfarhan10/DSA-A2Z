#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size of Your Array : " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cout << "Enter a Number of Qurey you want : " << endl;
    cin >> q;
    while (q--)
    {
        int n;
        cout << "Enter the Number : ";
        cin >> n;
        cout << mp[n] << endl;
    }
}
