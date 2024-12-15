// insert at head in linked list---------

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
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    // set the head memory address to the newNode next
    newNode->next = head;
    // then set the first node as head
    head = newNode;
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

    insert_at_head(head, 100);
    insert_at_head(head, 200);
    insert_at_head(head, 300);
    print_linked_list(head);
    return 0;
}