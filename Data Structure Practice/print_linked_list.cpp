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
int main()
{
    Node *Head = new Node(30);
    Node *a = new Node(90);
    Node *b = new Node(910);
    Node *c = new Node(902);
    Node *d = new Node(990);
    Head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    // cout << Head->val << endl;
    // cout << Head->next->val << endl;
    // cout << Head->next->next->val << endl;
    // cout << Head->next->next->next->next->val;
    Node *tmp = Head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    return 0;
}