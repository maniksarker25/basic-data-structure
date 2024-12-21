// insert at tail in linked list
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
void insert_at_tail(Node *&head, int val)
{
    // create new node
    Node *newNode = new Node(val);

    // handle corner case
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // make connection with current last node with new node
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // right now temp node in last node after loop
    // make connection here
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

    insert_at_tail(head, 40);
    insert_at_tail(head, 50);
    insert_at_tail(head, 60);
    print_linked_list(head);
    return 0;
}