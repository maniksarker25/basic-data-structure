#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

public:
    // function for push
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
        tail = newNode;
    }
    // function for pop
    void pop()
    {
        sz--;
        Node *deletedNode = head;
        head = head->next;
        delete deletedNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    // function for front
    int front()
    {
        return head->val;
    }

    // function for back
    int back()
    {
        return tail->val;
    }

    // function for size
    int size()
    {
        return sz;
    }

    // check empty
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    // take input a queue----------
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // print queue ----------
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}