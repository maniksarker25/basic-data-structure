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

    int q;
    cin >> q;

    sort(a, a + n);
    while (q--)
    {
        int x;
        cin >> x;
        int flag = 0;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (flag == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}