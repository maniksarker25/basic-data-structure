// insert at head

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

void print_forword(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

// insert at head

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    int val = 5;
    insert_at_head(head, val);

    print_forword(head);

    return 0;
}