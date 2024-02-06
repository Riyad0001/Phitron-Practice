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
int main()
{
    Node s(19);
    Node t(17);
    s.next = &t;
    cout << s.val << endl;
    cout << s.next->val << endl;
    return 0;
}