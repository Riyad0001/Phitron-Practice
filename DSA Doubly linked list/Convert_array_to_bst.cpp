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
Node *convert(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftRoot = convert(a, n, l, mid - 1);
    Node *rightRoot = convert(a, n, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
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
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Node *root = convert(a, n, 0, n - 1);
    level_order(root);
    return 0;
}