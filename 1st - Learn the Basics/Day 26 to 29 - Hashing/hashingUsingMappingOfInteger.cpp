#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size on your Array : " << endl;
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
    cout << "Enter how many Query you want : " << endl;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << "Your Number Exist : " << mp[number] << " Times" << endl;
    }
}