#include <bits/stdc++.h>
using namespace std;

void RecursiveInsertionSort(int arr[], int n)
{
    if (n <= 1)
    {
        return;
    }
    RecursiveInsertionSort(arr, n - 1);
    int j = n - 1;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;

        j--;
    }
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
    RecursiveInsertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}