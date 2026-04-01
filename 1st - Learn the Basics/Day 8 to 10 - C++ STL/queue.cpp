#include <bits/stdc++.h>
using namespace std;

void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(7);
    q.back() += 3;
    cout<<q.back();
    cout
}

int main()
{
    explainQueue();
}