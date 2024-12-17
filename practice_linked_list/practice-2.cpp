/*
Question: Take a singly linked list as input and check if the linked list is sorted in ascending order.


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
    }

    tail->next = newNode;
    tail = newNode;
    return;
}

void check_sort(Node *head)
{
    Node *temp = head;
    int is_ascending = 1;
    while (temp->next != NULL)
    {
        if (temp->val > temp->next->val)
        {
            is_ascending = 0;
        }
        temp = temp->next;
    }
    if (is_ascending == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

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
    check_sort(head);

    return 0;
}