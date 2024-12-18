/*
Question: Take a singly linked list as input and print the reverse of the linked list.

 */

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
    tail = newNode;
    return;
}
void print_linked_list_reverse(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }

    print_linked_list_reverse(temp->next);
    cout << temp->val << ' ';
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_at_tail(head, tail, val);
    }
    print_linked_list_reverse(head);
    return 0;
}