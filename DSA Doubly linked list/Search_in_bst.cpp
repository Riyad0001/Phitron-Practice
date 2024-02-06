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
Node *input_tree()
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
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        // kaj jabotio
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
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
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "NO trEE" << endl;
    }
    queue<Node *> n;
    n.push(root);
    while (!n.empty())
    {
        Node *f = n.front();
        n.pop();
        cout << f->val << " ";
        if (f->left)
            n.push(f->left);
        if (f->right)
            n.push(f->right);
    }
}
bool Search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
    {
        return Search(root->left, x);
    }
    else
    {
        return Search(root->right, x);
    }
}
int main()
{
    Node *root = input_tree();
    if (Search(root, 555))
        cout << "Yes,Found";
    else
        cout << "No";

    return 0;
}