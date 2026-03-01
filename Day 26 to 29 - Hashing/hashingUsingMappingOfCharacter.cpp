#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size of your Array : ";
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cout << "Enter how many Query you want : ";
    cin >> q;
    while (q--)
    {
        char c;
        cout << "Enter the Character : ";
        cin >> c;

        cout << mp[c] << endl;
    }
}