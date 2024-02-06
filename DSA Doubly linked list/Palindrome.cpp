#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newTail = new Node(val);
    if (tail == NULL)
    {
        head = newTail;
        tail = newTail;
        return;
    }
    tail->next = newTail;
    newTail->prev = tail;
    tail = newTail;
}
bool palindrom(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        if (i->val != j->val)
        {
            return false;
            break;
        }
        else
        {
            i = i->next;
            j = j->prev;
        }
    }
    if (i->val != j->val)
    {
        return false;
    }
    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    if (palindrom(head, tail))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}