#include <bits/stdc++.h>
using namespace std;
bool flag = false;
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
    Node *tmp = Head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_at_position(Node *Head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = Head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            flag = false;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_at_head(Node *&Head, int v)
{

    Node *newNode = new Node(v);
    newNode->next = Head;
    Head = newNode;
}
int main()
{
    int size;
    Node *Head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        size++;
        insert_at_tail(Head, val);
    }
    int t;
    cin >> t;
    while (t--)
    {
        flag = true;
        int ind, val;
        cin >> ind >> val;
        if (ind == 0)
        {
            insert_at_head(Head, val);
            size++;
        }
        else if (ind > 0)
        {
            insert_at_position(Head, ind, val);
            size++;
        }
        else if (ind > size)
        {
            cout << "Invalid" << endl;
            flag = false;
        }
        else if (size == ind)
        {
            insert_at_tail(Head, val);
            size++;
        }
        if (flag == true)
            print_linked_list(Head);
    }

    return 0;
}