#include <bits/stdc++.h>
using namespace std;

void LeftRotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
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
    cout << "Your Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    LeftRotate(arr, n);
    cout << endl;
    cout << "Left Side Rotated : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}