#include <bits/stdc++.h>
using namespace std;

void explainList()
{
    list<int> ls;
    ls.push_back(7);
    ls.emplace_back(10);
    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;
    ls.push_front(29);
    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;
    ls.emplace_front(49);
    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;

    // rest function are same as vector 
    // the function of vector are begin, end, rbegin, rend, clear, insert, erase, empty, size, swap 
}

int main()
{
    explainList();
}