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
int main()
{
    myQueue r;
    // r.push(10);
    // r.push(100);
    // r.push(1009);
    // cout << r.front() << endl;
    // r.pop();
    // cout << r.front() << endl;
    // r.pop();
    // cout << r.front() << endl;
    // r.pop();
    // // cout << r.front() << endl;
    // r.pop();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        r.push(x);
    }
    while (!r.empty())
    {
        cout << r.front() << endl;
        r.pop();
    }

    return 0;
}