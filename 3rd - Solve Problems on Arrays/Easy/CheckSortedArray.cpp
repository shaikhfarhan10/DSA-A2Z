#include <bits/stdc++.h>
using namespace std;

int CheckIfArrayIsSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
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
    cout << CheckIfArrayIsSorted(arr, n);
}