#include <bits/stdc++.h>
using namespace std;

void printName(string name)
{
    cout << "Hey " << name;
}

void doSomething(int arr[], int n)
{
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
    // cout << num << endl;
    // num += 5;
    // cout << num << endl;
    // num += 5;
    // cout << num << endl;
}
int main()
{

    // Function for doSomething
    // int num = 10;
    // doSomething(num);
    // cout << num << endl;

    // Function for printName
    // string name;
    // cin>>name;
    // printName(name);

    // for (int i = 0; i < n; i++)
    // {
    //     // cout << i << endl;
    //     cin >> arr[i];
    // }
    //
    // for (int i = 0; i < 10; i++)
    // {
    //     // cout << i << endl;
    //     cout << arr[i] << endl;
    // }

    int n = 7;
    int arr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    doSomething(arr, n);
    cout << "Value inside int main: " << arr[0] << endl;

    return 0;
}