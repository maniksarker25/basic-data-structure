// list modifier

#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l = {10, 20, 30};
    list<int> l2;
    l2 = l;
    // l2.assign(l.begin(), l.end());

    // push back => insert at tail
    l2.push_back(40);
    // push font => insert at head
    l2.push_front(5);

    // pop back => delete from tail
    // l2.pop_back();
    // pop front => delete from head
    l2.pop_front();

    for (int val : l2)
    {
        cout << val << " ";
    }
    return 0;
}