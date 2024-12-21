// input linked list -----------
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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    // create new node
    Node *newNode = new Node(val);

    // handle corner case
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    // make connection with current last node with new node
    tail->next = newNode;

    // then move the tail to new node
    tail = newNode;
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
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    print_linked_list(head);

    return 0;
}