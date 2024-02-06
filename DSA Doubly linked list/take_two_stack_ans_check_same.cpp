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
bool equalS(myStack &stack1, myStack &stack2)
{
    if (stack1.size() != stack2.size())
    {
        return false; // Stacks are of different sizes
    }

    while (!stack1.empty() && !stack2.empty())
    {
        if (stack1.top() != stack2.top())
        {
            return false;
        }
        stack1.pop();
        stack2.pop();
    }

    return true; // Stacks are equal
}
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
    myStack ll;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        ll.push(y);
    }
    if (equalS(li, ll))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
