#include <bits/stdc++.h>
using namespace std;

int SecondLargestNumber(int arr[], int n)
{
    if (n < 2)
        return -1;
    int LargeNo = arr[0];
    int SecondLargeNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (LargeNo < arr[i])
        {
            LargeNo = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > SecondLargeNo && arr[i] != LargeNo)
        {
            SecondLargeNo = arr[i];
        }
    }
    if (SecondLargeNo == INT_MIN)
        return -1;
    return SecondLargeNo;
}

int SecondLargestOptimalSolution(int arr[], int n)
{
    if (n < 2)
        return -1;
    int LargeNo = INT_MIN;
    int SecondLargeNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > LargeNo)
        {
            SecondLargeNo = LargeNo;
            LargeNo = arr[i];
        }
        else if (arr[i] > SecondLargeNo && arr[i] != LargeNo)
        {
            SecondLargeNo = arr[i];
        }
    }
    if (SecondLargeNo == INT_MIN)
    {
        return -1;
    }
    return SecondLargeNo;
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
    cout << SecondLargestOptimalSolution(arr, n);
}