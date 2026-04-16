#include <bits/stdc++.h>
using namespace std;

int SecondLargestNumber(int arr[], int n)
{
    int LargeNo = arr[0];
    int SecondLargeNo = -1;
    for (int i = 0; i < n; i++)
    {
        if (LargeNo < arr[i])
        {
            LargeNo = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>SecondLargeNo && arr[i]!=LargeNo)
        {
            SecondLargeNo = arr[i];
        }
        
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
    cout << SecondLargestNumber(arr, n);
}