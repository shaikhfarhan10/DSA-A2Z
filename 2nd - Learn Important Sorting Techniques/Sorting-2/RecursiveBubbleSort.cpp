#include <bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(int arr[], int n)
{

    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    recursiveBubbleSort(arr, n - 1);
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
    recursiveBubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}