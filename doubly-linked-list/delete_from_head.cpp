// delete from head
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

void print_forword(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

// delete from head
void delete_from_head(Node *&head, Node *&tail)
{
    Node *deletedNode = head;

    // handle corner case
    if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        delete deletedNode;
        return;
    }

    head = head->next;
    head->prev = NULL;
    delete deletedNode;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    // make connection
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    delete_from_head(head, tail);
    delete_from_head(head, tail);
    // delete_from_head(head, tail);

    print_forword(head);

    return 0;
}