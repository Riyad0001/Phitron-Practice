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
void print_ricersive(Node *n)
{
    if (n == NULL)
        return;
    cout << n->val << " ";
    print_ricersive(n->next);
}
void print_reverse(Node *n)
{
    if (n == NULL)
        return;
    print_reverse(n->next);
    cout << n->val << " ";
}
void reverse(Node *&head, Node *cur)
{
    while (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
void printt(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(50);
    Node *a = new Node(60);
    Node *b = new Node(70);

    head->next = a;
    a->next = b;
    reverse(head, head);
    printt(head);
    return 0;
}