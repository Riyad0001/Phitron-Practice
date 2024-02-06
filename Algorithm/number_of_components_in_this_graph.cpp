#include <bits/stdc++.h>
using namespace std;
const int N = 10e5 + 6;
vector<int> v[N];
bool vis[N];
void dfs(int src)
{
    vis[src] = true;
    for (int child : v[src])
    {
        if (vis[child] == false)
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
    int com = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            dfs(i);
            com++;
        }
    }

    cout << com;
    return 0;
}