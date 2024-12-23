// list operation function ----------------

#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<int> l = {10, 20, 30, 40, 50, 60, 10, 28, 10};

    // remove by value
    // l.remove(10); // that code remove all 10 from list l

    // for sort ---------------------
    // l.sort();
    // descending sort---
    // l.sort(greater<int>());

    // that stay unique value => remove duplicate value but need sorted list
    // l.unique();

    // reverse list --------------
    l.reverse();

    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}