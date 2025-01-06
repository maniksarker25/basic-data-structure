#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin >> n;
    // take input a queue----------
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // print queue ----------
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}