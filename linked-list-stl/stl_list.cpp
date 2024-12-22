#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    list<int> l2(l);
    // we can also add array and vector--------------
    // for array --------------
    // int a[] = {8, 6, 8};
    // list<int> l2(a, a + 3);
    // for vector--------------
    // vector<int> v = {5, 6, 4};
    // list<int> l2(v.begin(), v.end());

    // for printing => use iterator---------
    //    for(auto it = l.begin();it != l.end();it++){
    //     cout << *it << endl;
    //    }
    // range based for loop-------------
    for (int val : l2)
    {
        cout << val << " ";
    }
    return 0;
}