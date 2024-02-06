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
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_ulta(Node *tail)
{
    Node *tmp = tail;
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void insert_at_pos(Node *head, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    newnode->next->prev = newnode;
    newnode->prev = tmp;
}
int size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_at_head(Node *&head, int val, Node *&tail)
{
    Node *newHead = new Node(val);
    if (head == NULL)
    {
        head = newHead;
        tail = newHead;
        return;
    }
    newHead->next = head;
    head->prev = newHead;
    head = newHead;
}
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
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int test;
    cin >> test;

    while (test--)
    {
        int pos, val;
        cin >> pos >> val;

        if (size(head) < pos)
        {
            cout << "Invalid" << endl;
        }
        else if (pos == 0)
        {
            insert_at_head(head, val, tail);
            cout << "L -> ";
            print_normal(head);
            cout << "R -> ";
            print_ulta(tail);
        }
        else if (size(head) == pos)
        {
            insert_at_tail(head, tail, val);
            cout << "L -> ";
            print_normal(head);
            cout << "R -> ";
            print_ulta(tail);
        }
        else
        {

            insert_at_pos(head, pos, val);
            cout << "L -> ";
            print_normal(head);
            cout << "R -> ";
            print_ulta(tail);
        }
    }

    return 0;
}