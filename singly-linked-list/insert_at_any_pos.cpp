// insert at any position in linked list---------

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

// function for insert at head
void insert_at_any_pos(Node *&head, int idx, int val)
{

    Node *newNode = new Node(val);

    // take head to the inx -1 position
    Node *temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }
    // set new node next = the address of idx node ---
    newNode->next = temp->next;
    // set temp ar next = new node
    temp->next = newNode;
};

// print linked list
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_any_pos(head, 2, 100);
    insert_at_any_pos(head, 2, 200);

    print_linked_list(head);
    return 0;
}