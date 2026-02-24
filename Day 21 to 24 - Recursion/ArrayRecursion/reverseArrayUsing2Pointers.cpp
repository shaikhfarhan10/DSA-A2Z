#include <bits/stdc++.h>
using namespace std;

void f(int n, int arr[], int i)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    f(n, arr, i + 1);
}

int main()
{
    int n;
    cout << "Enter a Size of an Array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    f(n, arr, 0);
    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}