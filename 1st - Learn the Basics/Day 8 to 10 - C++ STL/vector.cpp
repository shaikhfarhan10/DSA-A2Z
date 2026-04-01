#include <bits/stdc++.h>
using namespace std;

int main()
{
    // This is how we define vector
    vector<int> v;
    v.push_back(7);
    v.emplace_back(10);
    // v.emplace_back(29);
    // v.emplace_back(47);
    // This is how we have to use for loop for normal vector space
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // Defining vector with pairs
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);
    // This is how we have to use for loop for pair vector space
    for (const auto &[x, y] : vec)
    {
        cout << x << " " << y << " ";
    }
    cout << endl;

    // Define vector space with same value repeatedly
    vector<int> vs(5, 100);
    for (int x : vs)
    {
        cout << x << " ";
    }
    cout << endl;

    // Define vector space with size and it will be full with garbage value
    vector<int> g(5);
    for (int x : g)
    {
        cout << x << " ";
    }
    cout << endl;

    // Making replica of the same vector
    vector<int> r(7, 10);
    vector<int> r1(r);
    for (int x : r1)
    {
        cout << x << " ";
    }
}