#include <bits/stdc++.h>
using namespace std;

// void printName(string name)
// {
//     cout << "Hey " << name;
// }

int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}

int main()
{
    // string name1;
    // cin >> name1;
    // printName(name1);
    // cout << " ";
    // string name2;
    // cin >> name2;
    // printName(name2);

    // return 0;

    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << "Your Total Sum: " << res;
    return 0;
}
