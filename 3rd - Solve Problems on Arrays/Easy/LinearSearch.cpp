#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int n, int find)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the Size of your Array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int find;
    cout << "Enter the Number you want to find : ";
    cin >> find;
    cout << LinearSearch(arr, n, find);
}