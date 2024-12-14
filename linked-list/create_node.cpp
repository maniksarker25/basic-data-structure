#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;    // value
    Node *next; // pointer that point a node

    // make constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL; // initially all next is null
    }
};

int main()
{
    // Node a, b, c;
    // // set value for all node
    // a.val = 10;
    // b.val = 20;
    // c.val = 30;
    // // make connection using pointer
    // a.next = &b;
    // b.next = &c;
    // c.next = NULL;

    // using constructor------
    Node a(10), b(20), c(100);
    a.next = &b;
    b.next = &c;

    // cout << a.val << ' ' << b.val << " " << c.val;
    // print by using connection------------
    cout << a.val << endl;
    // cout << (*a.next).val << endl;
    cout << a.next->val << endl;       // use arrow sign => print b
    cout << a.next->next->val << endl; // print c
    return 0;
}