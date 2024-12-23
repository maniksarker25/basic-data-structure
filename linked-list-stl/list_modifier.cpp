// list modifier

#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 20, 50, 20};
    list<int> l2;
    l2 = l;
    // l2.assign(l.begin(), l.end());

    // push back => insert at tail------------
    // l2.push_back(40);
    // push font => insert at head---------
    // l2.push_front(5);

    // pop back => delete from tail-------
    // l2.pop_back();
    // pop front => delete from head------
    // l2.pop_front();

    // insert at any -------------------
    // l2.insert(next(l2.begin(), 2), 25);

    // we can insert a list also -----
    // list<int> l3 = {200, 300};
    // l2.insert(next(l2.begin(), 2), l3.begin(), l3.end());
    // also we can insert a vector ---------------
    // access element/node -----------------
    // cout << *next(l.begin(), 2);

    // erase => delete from any -------------------------
    // l2.erase(next(l2.begin(), 3));
    // erase multiple value ----------------------
    // l2.erase(next(l2.begin(), 2), next(l2.begin(), 5));

    // replace ------------------
    // replace(l2.begin(), l2.end(), 20, 100); // all 20 will replace by 100

    // find ------------------------
    auto it = find(l2.begin(), l2.end(), 20);

    if (it == l2.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }

    for (int val : l2)
    {
        cout << val << " ";
    }
    return 0;
}