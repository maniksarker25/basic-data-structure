
// range sum query

// Bruteforce solution -------------------------

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     vector<int> v(n + 1);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> v[i];
//     }

//     while (q--)
//     {
//         int l, r;
//         cin >> l >> r;
//         int sum = 0;

//         for (int i = l; i <= r; i++)
//         {
//             sum += v[i];
//         }
//         cout << sum << endl;
//     }

//     return 0;
// }

// optimize way with maintain time complexity
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // find prefix sum values

    vector<long long int> pre(n + 1);
    // manually assign the first value of prefix sum
    pre[1] = v[1];
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long int sum;
        if (l == 1)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }

        cout << sum << endl;
    }

    return 0;
}