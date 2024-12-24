/*

Question: You have a doubly linked list which is empty initially. You need to take a value Q which refers to queries. For each query you will be given X and V. You will insert the value V to the Xth index of the doubly linked list and print the list in both left to right and right to left. If the index is invalid then print “Invalid”.
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

// Insert at tail
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

// Insert at head
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// Insert at any position
void insert_at_any_post(Node *&head, Node *&tail, int idx, int val)
{

    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

// Print doubly linked list forward
void print_doubly_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

// Print doubly linked list backward
void print_backword(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

// Get the size of the list
int total_count(Node *head)
{
    int total = 0;
    while (head != NULL)
    {
        total++;
        head = head->next;
    }
    return total;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        int total_size = total_count(head);

        if (x < 0 || x > total_size)
        {
            cout << "Invalid\n";
        }
        else if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_doubly_forward(head);
            cout << endl;
            print_backword(tail);
            cout << endl;
        }
        else if (x == total_size)
        {
            insert_at_tail(head, tail, v);
            print_doubly_forward(head);
            cout << endl;
            print_backword(tail);
            cout << endl;
        }
        else
        {
            insert_at_any_post(head, tail, x, v);
            print_doubly_forward(head);
            cout << endl;
            print_backword(tail);
            cout << endl;
        }
    }

    return 0;
}
