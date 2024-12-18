/*

Question: Take a singly linked list as input, then print the maximum value of them.
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

// count linked list
int find_max(Node *head)
{
    Node *temp = head;
    int max = 0;
    while (temp != NULL)
    {

        if (max < temp->val)
        {
            max = temp->val;
        }
        temp = temp->next;
    }

    return max;
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

    int max = find_max(head);
    cout << max;
    return 0;
}