#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> Q;
    stack<int> S;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Q.push(x);
    }
    while (!Q.empty())
    {
        S.push(Q.front());
        Q.pop();
    }
    while (!S.empty())
    {
        cout << S.top() << " ";
        S.pop();
    }

    return 0;
}