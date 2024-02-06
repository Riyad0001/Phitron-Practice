#include <bits/stdc++.h>
using namespace std;
bool stackQ(stack<int> &s, queue<int> &q)
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
    stack<int> s;
    queue<int> q;
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