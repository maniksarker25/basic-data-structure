// list clear -----------

#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5};

    // clear list-------
    // l.clear();

    l.resize(2);
    // range based for loop-------------
    for (int val : l)
    {
        cout << val << " ";
    }

    if (l.empty())
    {
        cout << "list is empty";
    }

    return 0;
}