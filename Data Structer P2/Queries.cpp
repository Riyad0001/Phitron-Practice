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

void insert_at_head(Node *&head, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    new_node->next = head;
    head = new_node;
}
void insert_at_tail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new_node;
}
void delete_any_pos(Node *head, int pos)
{
    Node *tmp = head;
    if (tmp == NULL)
    {
        return;
    }
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
            return;
    }
    if (tmp->next == NULL)
        return;

    Node *delete_node = tmp->next;
    tmp->next = delete_node->next;

    delete delete_node;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *delete_node = head;
    head = head->next;
    delete delete_node;
}
void print_linked_list(Node *head)
{

    Node *tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, v);
        }
        else if (x == 2)
        {
            if (v == 0)
                delete_head(head);
            else
                delete_any_pos(head, v);
        }
        print_linked_list(head);
    }

    cout << endl;
    return 0;
}