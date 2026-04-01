#include <bits/stdc++.h>
using namespace std;

void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.emplace(10);
    cout << "The value on the Top of the Stack: " << st.top() << endl;
    cout << "The Size of the Stack: " << st.size() << endl;
    cout << "Is the Stack is Empty or Not: " << st.empty() << endl;
    while (!st.empty())
    {
        cout << "The value in Stack: " << st.top() << endl;
        st.pop();
    }
    cout << "Is the Stack is Empty or Not: " << st.empty() << endl;
}

int main()
{
    explainStack();
}

// There is one more function of Stack is Swap
// what it does is, it swaps to stacks values which is inside it