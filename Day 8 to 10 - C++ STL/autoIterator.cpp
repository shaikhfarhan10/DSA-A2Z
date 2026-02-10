#include <bits/stdc++.h>
using namespace std;

// Three types for printing and getting the output

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

void totalauto(vector<int> &v)
{
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

void eraseFun(vector<int> &v)
{
    v.erase(v.begin() + 1);
    v.erase(v.begin() + 1, v.begin() + 3);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

void insertFun(vector<int> &v)
{
    vector<int> vs(7, 1000);
    vs.insert(vs.begin(), 5000);
    vs.insert(vs.begin() + 1, 7, 10000);
    for (auto it : vs)
    {
        cout << it << " ";
    }
    cout << endl;
}

void copyFun(vector<int> &v)
{
    vector<int> copy(5, 1000000000);
    vector<int> vs1(5, 7);
    vector<int> vs2(5, 10);
    vs1.insert(vs1.begin(), copy.begin(), copy.end());
    for (auto it : vs1)
    {
        cout << it << " ";
    }
    cout << endl;
    vs2.insert(vs2.end(), copy.begin(), copy.end());
    for (auto it : vs2)
    {
        cout << it << " ";
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
    totalauto(v);
    eraseFun(v);
    insertFun(v);
    copyFun(v);
}
// Some basic too 
// cout << v.size() << " "; This will show the size of the vector e.g. v = {10, 20} it will show size 2
// v.pop_back(); This will pop out the element from backside of the vector e.g. v = {10, 20} it will pop out and show {10}
/*
v1 = {10, 20}
v2 = {30, 40}
v1.swap(v2)
It will Do
v1 = {30, 40}
v2 = {10, 20}
*/
// v.clear() This will clear the whole vector
// cout<<v.empty() will show either the vector is having some element or not (in True and False)
