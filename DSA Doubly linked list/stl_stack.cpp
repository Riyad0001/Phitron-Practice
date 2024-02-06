#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> lk;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        lk.push(x);
    }
    while (!lk.empty())
    {
        cout << lk.top() << " ";
        lk.pop();
    }

    return 0;
}