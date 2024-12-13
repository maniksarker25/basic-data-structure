#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> pre(n);
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int left_sum = (i == 0) ? 0 : pre[i - 1];
        int right_sum = pre[n - 1] - pre[i];
        if (left_sum == right_sum)
        {
            cout << i;
            return 0;
        }
    }

    cout << -1;

    return 0;
}