// find vector

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {2, 4, 5, 3, 5, 8};

    // vector<int>::iterator it = find(v.begin(), v.end(), 100);
    auto it = find(v.begin(), v.end(), 8);

    for (int i : v)
    {
        cout << i << ' ';
    }

    if (it == v.end())
    {
        cout << "not found";
    }
    else
    {
        cout << "found";
    }

    return 0;
}