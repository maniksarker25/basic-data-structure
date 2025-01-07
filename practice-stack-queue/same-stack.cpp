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

class MyStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
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

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    MyStack st1;
    MyStack st2;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    int b;
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    if (st1.size() != st2.size())
    {
        cout << "NO";
        return 0;
    }

    int isSame = 1;
    while (!st1.empty())
    {
        if (st1.top() != st2.top())
        {
            isSame = 0;
            break;
        }
        st1.pop();
        st2.pop();
    }

    if (isSame == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}