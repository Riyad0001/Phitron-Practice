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
        cout << endl;
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
void printMid(Node *Head)
{
    Node *tmp = Head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    if (cnt % 2 == 1)
    {
        tmp = Head;
        for (int i = 1; i < cnt / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->next->val << endl;
    }
    else if (cnt % 2 == 0)
    {
        tmp = Head;
        for (int i = 1; i < cnt / 2 - 1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->next->val << " " << tmp->next->next->val << endl;
    }

    // 2nd Way:
    //  if (Head == NULL)
    //  {
    //      cout << "Empty List" << endl;
    //      return;
    //  }
    //  Node *slowTmp = Head;
    //  Node *firstTmp = Head;
    //  Node *prev_slowTmp = NULL;
    //  while (firstTmp != NULL && firstTmp->next != NULL)
    //  {
    //      prev_slowTmp = slowTmp;
    //      slowTmp = slowTmp->next;
    //      firstTmp = firstTmp->next->next;
    //  }
    //  if (firstTmp == NULL)
    //  {
    //      cout << prev_slowTmp->val << " " << slowTmp->val << " ";
    //  }
    //  else
    //  {
    //      cout << slowTmp->val << endl;
    //  }
}
int main()
{
    Node *Head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(Head, val);
    }
    printMid(Head);
    return 0;
}
