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
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
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
void delete_from_position(Node *Head, int pos)
{

    if (Head == NULL)
    {
        cout << endl
             << "Not have any Content to delete from POsition" << endl
             << endl;
        return;
    }
    Node *newNode = new Node(pos);
    Node *tmp = Head;
    for (int i = 1; i <= pos - 1; i++)
    {

        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << endl
             << "Invalid Index" << endl
             << endl;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl
         << "Deleted Position " << pos << endl
         << endl;
}
void delete_head(Node *&Head)
{
    if (Head == NULL)
    {
        cout << endl
             << "Head is Not Available " << endl
             << endl;
        return;
    }
    Node *deleteNode = Head;
    Head = Head->next;
    delete deleteNode;
    cout << endl
         << "Deleted Head " << endl
         << endl;
}
int main()
{
    Node *Head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl; // done
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at Position: " << endl;
        cout << "Option 4: Insert at Head: " << endl; // done
        cout << "Option 5: Delete from Position " << endl;
        cout << "Option 6: Delete Head " << endl;
        cout << "Option 7: Terminate" << endl;
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
            int pos;
            cout << endl
                 << "Enter the position of Node you Delete :" << endl;
            cin >> pos;
            if (pos == 0)
            {
                delete_head(Head);
            }
            else
            {
                delete_from_position(Head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(Head);
        }
        else if (op == 7)
        {
            break;
        }
    }
    return 0;
}