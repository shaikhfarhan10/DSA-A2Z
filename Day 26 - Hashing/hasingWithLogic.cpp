#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size of an Array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0 && arr[i] <= 12)
        {
            hash[arr[i]]++;
        }
    }

    int q;
    cout << "Enter for how many number you want its frequency : ";
    cin >> q;
    while (q > 0)
    {
        int number;
        cin >> number;
        if (number >= 0 && number <= 12)
        {
            cout << "The frequency of the given Number : " << hash[number] << endl;
            q--;
        }
        else
        {
            cout << "Invalid Input! Enter a Number between 1 to 12.\n";
        }
    }
}