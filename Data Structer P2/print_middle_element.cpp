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
void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void middle(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    if (cnt % 2 == 1)
    {
        tmp = head;
        for (int i = 1; i < cnt / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->next->val << endl;
    }
    else if (cnt % 2 == 0)
    {
        tmp = head;
        for (int i = 1; i < cnt / 2 - 1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->next->val << " " << tmp->next->next->val << endl;
    }
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
    middle(head);
    return 0;
}