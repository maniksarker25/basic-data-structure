// reversing the array with vector
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    reverse(v.begin(), v.end());

    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}