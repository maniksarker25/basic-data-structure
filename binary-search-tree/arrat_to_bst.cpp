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

void level_order_print(Node *root)
{
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
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

Node *convert_array_to_bst(int a[], int n, int l, int r)
{
    if(l > r){
        return NULL;
    }
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *left_root = convert_array_to_bst(a, n, l, mid - 1);
    Node *right_root = convert_array_to_bst(a, n, mid + 1, r);
    root->left = left_root;
    root->right = right_root;
    return root;
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Node *root = convert_array_to_bst(a, n, 0, n - 1);
    level_order_print(root);

    return 0;
}