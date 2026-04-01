#include <bits/stdc++.h>
using namespace std;

void begin(vector<int> &v)
{
    vector<int>::iterator it = v.begin();
    // If you want the index (position):
    cout << (it - v.begin()) << " ";
    // If you want the value:
    cout << *(it) << " ";
    // If you want the address of the element (rare, but possible):
    cout << &(*it) << " ";
    it++;
    cout << (it - v.begin()) << " ";
    cout << *(it) << " ";
    cout << &(*it) << " ";
    it++;
    cout << (it - v.begin()) << " ";
    cout << *(it) << " ";
    cout << &(*it) << " ";
    it++;
    cout << (it - v.begin()) << " ";
    cout << *(it) << " ";
    cout << &(*it) << " ";
}
void end(vector<int> &v)
{
    vector<int>::iterator it = v.end();
    // If you want the index (position):
    cout << (it - v.end()) << " ";
    // If you want the value:
    cout << *(it) << " ";
    // If you want the address of the element (rare, but possible):
    cout << &(*it) << " ";
    it++;
    cout << (it - v.end()) << " ";
    cout << *(it) << " ";
    cout << &(*it) << " ";
}
void rev(vector<int> &v)
{
    vector<int>::reverse_iterator t = v.rbegin();
    // cout << *t << " ";
    t++;
    cout << *t << " ";

    vector<int>::reverse_iterator f = v.rend();
    // cout << *f << " ";
    ++f;
    cout << *f << " ";
}
void basic(vector<int> &v)
{
    cout << v[0] << " " << v.at(0) << " ";
    cout << v.back() << " ";
}
int main()
{
    vector<int> v;
    v.push_back(7);
    v.emplace_back(10);
    v.emplace_back(29);
    v.emplace_back(47);
    // begin(v);
    // end(v);
    // rev(v);
    basic(v);
}