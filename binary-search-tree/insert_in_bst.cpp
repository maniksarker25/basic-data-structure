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
        Node *p = q.front();
        q.pop();

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
        p->left = myLeft;
        p->right = myRight;
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

    if (root == NULL)
    {
        cout << "No tree";
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
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

void insert(Node *root, int val)
{
    if (!root)
    {
        return false;
    }
    if (root->val == val)
    {
        return true;
    }
    if (root->val > val)
    {
        bool l = search(root->left, val);
        return l;
    }
    else
    {
        bool r = search(root->right, val);
        return r;
    }
}



void level_order_print(Node*root){
    queue<Node*>q;
    if(root){
        q.push(root);
    }
    while (!q.empty())
    {
        Node* f  = q.front();
        q.pop();

        cout << f->val << " ";
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
    
}

int main()
{
    Node *root = intput_tree();
    int val;
    cin >> val;
    insert(root, val);
    return 0;
}