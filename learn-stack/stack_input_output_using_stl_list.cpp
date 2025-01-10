#include <bits/stdc++.h>

using namespace std;

class myStack
{
    // make changes
public:
    list<int> l;

    // functions for push
    void push(int val)
    {
        l.push_back(val);
    }
    // function for pop
    void pop()
    {
        l.pop_back();
    }
    // function for return top value
    int top()
    {
        return l.back();
    }
    // function for return size
    int size()
    {
        return l.size();
    }
    // function for check empty
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    // output stack
    while (!st.empty())
    {
        if (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }

    return 0;
}