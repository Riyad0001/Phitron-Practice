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
        cout << endl
             << "Insert at Head " << endl;
        return;
    }
    Node *tmp = Head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // Node ekhon Last Node e
    tmp->next = newNode;
    cout << endl
         << "Insert at Tail " << endl;
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
void insert_at_position(Node *Head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = Head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at Position " << pos << endl
         << endl;
}
void insert_at_head(Node *&Head, int v)
{

    Node *newNode = new Node(v);
    newNode->next = Head;
    Head = newNode;
    cout << endl
         << "Inserted at Head" << endl;
}

int main()
{
    Node *Head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at Position: " << endl;
        cout << "Option 4: Insert at Head: " << endl;
        cout << "Option 5: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter a Value: ";
            int c;
            cin >> c;
            insert_at_tail(Head, c);
        }
        else if (op == 2)
        {
            print_linked_list(Head);
        }
        else if (op == 3)
        {
            cout << "Enter Position :" << endl;
            int pos, v;
            cin >> pos;
            cout << "Enter Value :" << endl;
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(Head, v);
            }
            else
            {
                insert_at_position(Head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter Value :" << endl;
            cin >> v;
            insert_at_head(Head, v);
        }
        else if (op == 5)
        {
            break;
        }
    }
    return 0;
}