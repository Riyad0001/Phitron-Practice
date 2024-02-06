#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
        cin >> t[i];
    int m;
    cin >> m;
    vector<int> u(m);
    for (int i = 0; i < m; i++)
        cin >> u[i];
    int w;
    cin >> w;
    t.insert(t.begin() + w, u.begin(), u.end());
    for (int i = 0; i < t.size(); i++)
    {
        cout << t[i] << " ";
    }

    return 0;
}