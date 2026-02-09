#include <bits/stdc++.h>
using namespace std;

void forLoop(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}
void autoAssign(vector<int> &v)
{
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(7);
    v.emplace_back(10);
    v.emplace_back(29);
    v.emplace_back(47);
    forLoop(v);
    autoAssign(v);
}