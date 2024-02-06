#include <bits/stdc++.h>
using namespace std;
bool StackQueueEqual(stack<int> &S, queue<int> &Q)
{
    while (!S.empty() && !Q.empty())
    {
        if (S.top() != Q.front())
        {
            return false;
        }
        S.pop();
        Q.pop();
    }
    return S.empty() && Q.empty();
}
int main()
{
    stack<int> S;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        S.push(x);
    }
    queue<int> Q;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        Q.push(y);
    }
    if (StackQueueEqual(S, Q))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}