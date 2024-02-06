#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *prev;
    Node *next;

    Node(string val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *tmp = tail;

    tmp->next = newNode;
    newNode->prev = tmp;
    tail = newNode;
}
void print_List(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void visit(Node *head, Node *&cur, string val)
{
    Node *prevCur = cur;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == val)
        {
            cur = tmp;
            cout << tmp->val << endl;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
    cur = prevCur;
}

void prev(Node *&cur)
{
    if (cur->prev != NULL)
    {
        cur = cur->prev;
        cout << cur->val << endl;
        return;
    }
    else
        cout << "Not Available\n";
}

void next(Node *&cur)
{
    if (cur->next != NULL)
    {
        cur = cur->next;
        cout << cur->val << endl;
        return;
    }
    else
        cout << "Not Available\n";
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    Node *cur;

    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
            break;
        insert_at_tail(head, tail, val);
    }
    cur = head;
    int t;
    cin >> t;

    while (t--)
    {
        string cm;
        cin >> cm;
        if (cm == "visit")
        {
            string s;
            cin >> s;
            visit(head, cur, s);
        }
        if (cm == "prev")
            prev(cur);
        else if (cm == "next")
            next(cur);
    }

    return 0;
}