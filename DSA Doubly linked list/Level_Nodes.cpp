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
void Level_node_print(Node *root, int level, vector<int> &v)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> f = q.front();
        Node *node = f.first;
        int Curlevel = f.second;
        q.pop();
        if (Curlevel == level)
        {
            v.push_back(node->val);
        }
        if (node->left)
        {
            q.push({node->left, Curlevel + 1});
        }
        if (node->right)
        {
            q.push({node->right, Curlevel + 1});
        }
    }
}
vector<int> v;
int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    Level_node_print(root, x, v);
    if (!v.empty())
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
    else
    {
        cout << "Invalid";
    }
    return 0;
}