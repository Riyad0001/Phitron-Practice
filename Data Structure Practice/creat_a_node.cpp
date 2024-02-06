#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *nrt;
};
int main()
{
    Node a, b;
    a.val = 10;
    b.val = 99;
    a.nrt = &b;
    b.nrt = NULL;
    cout << a.val << endl;
    cout << b.val << endl;
    cout << a.nrt->val << endl;
    return 0;
}