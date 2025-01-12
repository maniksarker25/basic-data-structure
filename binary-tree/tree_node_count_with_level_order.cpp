#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *intput_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;

    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        // step 1 : q ar front bar kora ana
        Node *p = q.front();
        q.pop();

        // step 2 : oi node ka nia kaj
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }

        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }

        // make collection

        p->left = myLeft;
        p->right = myRight;

        // step 3 : oi ndoe ar chindrens push
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }

    return root;
}

int level_order(Node *root)
{
    int count = 0;
    if (root == NULL)
    {
        return count;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {

        // step 1 : queue thaka bar kora ana --------
        Node *f = q.front();
        q.pop();

        // step 2 : oi node ka nia kaj kora
        count++;
        // step 3 : oi node ar childerns push kora
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }

    return count;
}

int main()
{

    Node *root = intput_tree();

    int total_node = level_order(root);
    cout << total_node;

    return 0;
}