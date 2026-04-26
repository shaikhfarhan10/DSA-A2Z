#include <bits/stdc++.h>
using namespace std;

void LeftRotateByKPlace(int arr[], int n, int k)
{
   
}

int main()
{
    int n;
    cout << "Enter the Size Of your Array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the index no from where you have to Rotate the Array : ";
    cin >> k;
    cout << "Your Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    LeftRotateByKPlace(arr, n, k);
    cout << endl;
    cout << "Left Side Rotated from the index you put : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}