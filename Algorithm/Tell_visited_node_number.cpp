#include <bits/stdc++.h>
using namespace std;
vector<int> v[100];
bool vis[100];
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
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    dfs(src);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == true)
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}