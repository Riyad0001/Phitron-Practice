#include <bits/stdc++.h>
using namespace std;
const int N = 10e5 + 5;
vector<int> v[N];
bool vis[N];
void dfs(int src)
{
    vis[src] = true;
    for (int child : v[src])
    {
        if (!vis[child])
        {
            dfs(child);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;

        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    int components = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            components++;
        }
    }
    if (components == 1)

        cout << "YES\n";

    else

        cout << "NO\n";

    return 0;
}