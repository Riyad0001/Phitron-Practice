#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    vector<int> q(n);
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }

    q.insert(q.end(), p.begin(), p.end());
    for (int t : q)
        cout << t << " ";
    return 0;
}