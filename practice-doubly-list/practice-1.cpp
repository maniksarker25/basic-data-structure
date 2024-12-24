/*
Question: Take two doubly linked lists as input and check if they are the same or not.
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

// check same
void check_same(Node *head1, Node *head2)
{

    int is_same = 1;
    while (head1 != NULL)
    {

        if (head1->val != head2->val)
        {
            is_same = 0;
            break;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    if (is_same == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;
    int first_list_cout = 0;
    int second_list_count = 0;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
        first_list_cout++;
    }

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
        second_list_count++;
    }

    if (first_list_cout != second_list_count)
    {
        cout << "NO";
    }
    else
    {
        check_same(head1, head2);
    }

    return 0;
}