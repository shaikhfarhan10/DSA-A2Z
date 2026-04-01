#include <bits/stdc++.h>
using namespace std;

// char arr[5];
// cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
// cout << arr[3];

// 2D array
// int arr[3][5];
// arr[1][3] = 73;
// cout << arr[1][2];

// For taking each char from a String and even the length
// string s = "Farhan";
// int len = s.size();
// cout << s[len-1];

void character()
{
    char arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
}
void TwoDarray()
{
    int arr[3][5];
    arr[1][3] = 69;
    cout << arr[1][3];
}
void Stringing()
{
    string f = "Farhan";
    int len = f.size();
    cout << f[len - 5];
}
int main()
{
    character();
    TwoDarray();
    Stringing();

    return 0;
}