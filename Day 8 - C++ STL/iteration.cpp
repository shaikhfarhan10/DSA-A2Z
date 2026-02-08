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
void rev(vector<int> &v){
   
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
    rev(v);
}