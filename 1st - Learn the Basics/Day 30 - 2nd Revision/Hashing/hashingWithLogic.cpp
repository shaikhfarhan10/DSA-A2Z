#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Your Array Size : " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0 && arr[i] <= 12)
        {
            hash[arr[i]++];
        }
    }

    int q;
    cout << "Enter the Number of Query you want : " << endl;
    cin >> q;
    while (q > 0)
    {
        int number;
        cin >> number;
        if (number >= 0 && number <= 12)
        {
            cout << "The Frequency of the given Number " << hash[number] << endl;
            q--;
        }
        else
        {
            cout << "Invalid Input! Enter the Number between 0-12\n";
        }
    }
}