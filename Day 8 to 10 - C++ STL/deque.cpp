#include <bits/stdc++.h>
using namespace std;

void explainDeque()
{
    deque<int> dq;
    dq.push_back(7);
    dq.emplace_back(10);
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    dq.push_front(29);
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    dq.emplace_front(49);
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    dq.pop_back();
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    dq.pop_front();
    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << dq.back();
    cout << endl;
    cout << dq.front();

    // rest function are same as vector
    // the function of vector are begin, end, rbegin, rend, clear, insert, erase, empty, size, swap
}

int main()
{
    explainDeque();
}