/*
Question: Take a singly linked list as input, then take q queries. In each query you will be given an index and value. You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.

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
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_any_pos(Node *&head, int idx, int val)
{

    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 0; i < idx - 1; i++) // Traverse to idx - 1
    {
        if (temp == NULL)
        {
            cout << "Invalid" << endl;
            delete newNode; // Avoid memory leak
            return;
        }
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int count_node(Node *head)
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

// function for insert at head
void insert_at_head(Node *&head, int val)
{
    // crete new node
    Node *newNode = new Node(val);
    // set the head memory address to the newNode.next
    newNode->next = head;
    // then set the first node as head
    head = newNode;
};
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int idx, val;
        cin >> idx >> val;

        int total_node = count_node(head);

        if (idx < 0 || idx > total_node)
        {
            cout << "Invalid" << endl;
        }
        else if (idx == total_node) // insert at tail
        {
            insert_at_tail(head, tail, val);
            print_linked_list(head);
        }
        else if (idx == 0) // Insert at head
        {
            insert_at_head(head, val);

            print_linked_list(head);
        }
        else // Insert at any valid position
        {
            insert_at_any_pos(head, idx, val);
            print_linked_list(head);
        }
    }
    // ncie ot

    return 0;
}
