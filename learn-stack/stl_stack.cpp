#include <bits/stdc++.h>

using namespace std;

int main()
{
    // declare stack
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}