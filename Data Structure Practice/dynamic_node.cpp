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
    Node *head = new Node(99);
    Node *b = new Node(77);
    head->next = b;
    cout << head->val << endl;
    cout << head->next->val << endl;
    return 0;
}