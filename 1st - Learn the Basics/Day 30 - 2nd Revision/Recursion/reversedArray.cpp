#include <bits/stdc++.h>
using namespace std;

void revArr(int l, int arr[], int r)
{
    if (l >= r / 2)
        return;
    swap(arr[l], arr[r - l - 1]);
    revArr(l+1, arr, r);
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
    revArr(0, arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}