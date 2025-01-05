#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    // functions for push
    void
    push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    // function for pop
    void pop()
    {
        sz--;
        Node *deletedNode = tail;
        tail = tail->prev;
        delete deletedNode;

        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    // function for return top value
    int top()
    {
        return tail->val;
    }
    // function for return size
    int size()
    {
        return sz;
    }
    // function for check empty
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    // output stack
    while (!st.empty())
    {
        if (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }
    return 0;
}