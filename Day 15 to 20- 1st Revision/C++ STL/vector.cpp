#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(7);
    v.emplace_back(10);
    for (int it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    vector<pair<int, int>> vc;
    vc.push_back({29, 47});
    vc.emplace_back(66, 99);
    for (auto &[it, ti] : vc)
    {
        cout << it << " " << ti << " ";
    }
    cout << endl;
    vector<int> vs(7, 10);
    for (int it : vs)
    {
        cout << it << " ";
    }
}