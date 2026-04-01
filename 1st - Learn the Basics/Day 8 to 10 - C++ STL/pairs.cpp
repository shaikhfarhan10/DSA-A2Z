#include <bits/stdc++.h>
using namespace std;

int main()
{
    // This is how pairs are stored
    pair<int, int> p = {7, 10};
    cout << p.first << " " << p.second << " ";

    // This is how pairs are stored with pairs in it
    pair<int, pair<int, int>> ps = {29, {7, 10}};
    cout << ps.first << " " << ps.second.first << " " << ps.second.second << " ";

    // This is how pairs are stored in array
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
    // This is how we can see the value by using index number
    cout << arr[0].first;
}
// This are some basic of Pair