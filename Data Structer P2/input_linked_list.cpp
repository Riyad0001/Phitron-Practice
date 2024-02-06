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
void print_linked_list(Node *Head)
{
    cout << endl;

    cout << "Your Linked LIst: ";
    Node *tmp = Head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
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
    print_linked_list(Head);
    return 0;
}