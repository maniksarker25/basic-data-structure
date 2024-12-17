/*
Question: Take a singly linked list as input and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.

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

void check_duplicate(Node *head)
{
    Node *temp = head;
    int freq[105] = {0};
    int duplicate = 0;
    while (temp != NULL)
    {
        freq[temp->val]++;
        temp = temp->next;
    }

    for (int i = 0; i < 105; i++)
    {
        if (freq[i] > 1)
        {
            duplicate = 1;
            break;
        }
    }

    if(duplicate == 1){
        cout << "YES";
    }

    else{
        cout << "NO";
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
    check_duplicate(head);

    return 0;
}