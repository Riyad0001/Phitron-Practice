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
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int cnt = 0;
    void push(int val)
    {
        cnt++;
        Node *newN = new Node(val);
        if (head == nullptr)
        {
            head = newN;
            tail = newN;
            return;
        }
        newN->prev = tail;
        tail->next = newN;
        tail = tail->next;
    }
    void pop()
    {
        cnt--;
        Node *delen = tail;
        tail = tail->prev;
        if (tail == NULL)
            if (tail == NULL)
            {
                head = NULL;
            }
            else
            {
                tail->next = NULL;
            }
        delete delen;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return cnt;
    }
    bool empty()
    {
        if (cnt == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack li;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        li.push(x);
    }
    while (!li.empty())
    {
        cout << li.top() << endl;
        li.pop();
    }
    return 0;
}