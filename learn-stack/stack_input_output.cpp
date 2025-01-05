#include <bits/stdc++.h>

using namespace std;

class myStack
{
public:
    vector<int> v;

    // functions for push
    void push(int val)
    {
        v.push_back(val);
    }
    // function for pop
    void pop()
    {
        v.pop_back();
    }
    // function for return top value
    int top()
    {
        return v.back();
    }
    // function for return size
    int size()
    {
        return v.size();
    }
    // function for check empty
    bool empty()
    {
        return v.empty();
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