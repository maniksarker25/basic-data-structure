

/*

Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.
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

int cout_node(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void print_middle(Node *head, int total)
{
    Node *temp = head;
    int middle = total / 2;
    // cout << middle;
    if (middle % 2 != 0)
    {
        for (int i = 0; i < middle - 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val;
    }
    else
    {
        for (int i = 0; i < middle; i++)
        {
            temp = temp->next;
        }

        cout << temp->val;
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

    int total_node = cout_node(head);
    print_middle(head, total_node);

    return 0;
}