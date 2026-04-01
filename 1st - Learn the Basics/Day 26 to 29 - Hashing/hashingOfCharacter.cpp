#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
    }
}

/*
we can declare arr size 10 to the power 6 if it is locally scoped
but we can declare arr size 10 to the power 7 if it is globally scoped
*/