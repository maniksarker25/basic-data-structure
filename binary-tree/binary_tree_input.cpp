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
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

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

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // step 1 : queue thaka bar kora ana --------
        Node *f = q.front();
        q.pop();

        // step 2 : oi node ka nia kaj kora
        cout << f->val << " ";

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
}

int main()
{

    Node *root = intput_tree();

    level_order(root);

    return 0;
}