#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;    // value
    Node *next; // pointer that point a node
};

int main()
{
    Node a, b, c;
    // set value for all node
    a.val = 10;
    b.val = 20;
    c.val = 30;
    // make connection using pointer
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // cout << a.val << ' ' << b.val << " " << c.val;
    // print by using connection------------
    cout << a.val << endl;
    cout << (*a.next).val << endl;
    return 0;
}