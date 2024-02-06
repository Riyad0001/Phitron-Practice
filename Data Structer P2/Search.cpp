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
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
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
        int x;
        cin >> x;
        int pos = 0;
        bool flag = false;
        Node *tmp = head;
        while (tmp != NULL)
        {
            if (x == tmp->val)
            {
                flag = true;
                break;
            }
            pos++;
            tmp = tmp->next;
        }
        if (flag)
            cout << pos << endl;
        else
            cout << "-1" << endl;
        Node *dlt = head;
        while (dlt != NULL)
        {
            Node *tmp = dlt;
            dlt = dlt->next;
            delete tmp;
        }
    }

    return 0;
}