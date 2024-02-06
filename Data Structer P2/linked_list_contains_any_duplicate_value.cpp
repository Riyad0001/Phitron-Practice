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
void insert_at_tail(Node *&Head, int v)
{
    Node *newNode = new Node(v);
    if (Head == NULL)
    {
        Head = newNode;
        cout << endl;
        return;
    }
    Node *tmp = Head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // Node ekhon Last Node e
    tmp->next = newNode;
}
bool duplicate(Node *Head)
{
    Node *tmp = Head;
    while (tmp != NULL)
    {
        Node *runner = tmp->next;
        while (runner != NULL)
        {
            if (tmp->val == runner->val)
            {
                return true;
            }
            runner = runner->next;
        }
        tmp = tmp->next;
    }
    return false;
}
int main()
{
    Node *Head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(Head, val);
    }
    if (duplicate(Head))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}