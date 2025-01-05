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
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    st.pop();
    // need check for top and pop
    if (st.empty() == false)
    {
        cout << st.top() << endl;
    }
    if (st.empty() == false)
    {
        st.pop();
    }
    return 0;
}