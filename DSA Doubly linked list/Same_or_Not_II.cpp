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
class myStack
{
public:
    Node *head = NULL;
    int cnt = 0;
    void push(int val)
    {
        cnt++;
        Node *newN = new Node(val);
        if (head == nullptr)
        {
            head = newN;
            return;
        }
        newN->next = head;
        head = newN;
    }
    void pop()
    {
        cnt--;
        if (head == NULL)
        {
            return;
        }
        Node *delen = head;
        head = head->next;
        delete delen;
    }
    int top()
    {
        return head->val;
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
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int siz = 0;
    void push(int val)
    {
        siz++;
        Node *newN = new Node(val);
        if (head == NULL)
        {
            head = newN;
            tail = newN;
            return;
        }
        tail->next = newN;
        tail = tail->next;
    }
    void pop()
    {
        siz--;
        Node *deletNode = head;
        head = head->next;
        delete deletNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return siz;
    }
    bool empty()
    {
        if (siz == 0)
            return true;
        else
            return false;
    }
};
bool stackQ(myStack &s, myQueue &q)
{
    while (!s.empty() && !q.empty())
    {
        int stack_elm = s.top();
        s.pop();
        int queue_elm = q.front();
        q.pop();
        if (stack_elm != queue_elm)
        {
            return false;
        }
    }
    return s.empty() && q.empty();
}
int main()
{
    myStack s;
    myQueue q;
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }
    if (stackQ(s, q))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}