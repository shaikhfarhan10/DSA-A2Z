#include <iostream>
using namespace std;

class Solution {
public:
    int num = 0;

    void printNumber() {
        cout << num << endl;
    }
};

int main() {
    Solution a;
    cout << "enter the number: ";
    cin >> a.num;
    a.printNumber();
    return 0;
}
