#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> S;
    stack<int> dupli;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        S.push(x);
    }
    while (!S.empty())
    {
        dupli.push(S.top());
        S.pop();
    }

    while (!dupli.empty())
    {
        cout << dupli.top() << " ";
        dupli.pop();
    }

    return 0;
}
