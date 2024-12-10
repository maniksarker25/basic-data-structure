// vector iterator

#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v = {3, 5, 55, 356, 6, 6, 23};

    // print vector with iterator

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << ' ';
    }
    return 0;
}