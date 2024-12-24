/*
Question: Take a doubly linked list as input and reverse it. After that print the linked list.

 */

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

// insert at tail
void insert_at_tail(Node *&head, Node *&tail, int val)
{
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

// print
void print_doubly(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

// reverse doubly

void reverse_doubly(Node *head, Node *tail)
{

    for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {

        swap(i->val, j->val);
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    int count = 0;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
        count++;
    }

    print_doubly(head);
    reverse_doubly(head, tail);
    cout << endl;
    print_doubly(head);

    return 0;
}