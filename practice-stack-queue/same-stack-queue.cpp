#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    queue<int> q;
    int b;
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    if (st.size() != q.size())
    {
        cout << "NO";
        return 0;
    }
    int isSame = 1;

    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            isSame = 0;
            break;
        }
        st.pop();
        q.pop();
    }
    if (isSame == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}