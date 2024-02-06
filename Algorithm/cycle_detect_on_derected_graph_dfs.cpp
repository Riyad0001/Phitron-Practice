#include <bits/stdc++.h>
using namespace std;
const int N = 10e5 + 3;
vector<int> adj[N];
bool vis[N];
int pathVisit[N];
bool ans;
void dfs(int par)
{
    vis[par] = true;
    pathVisit[par] = true;
    for (int child : adj[par])
    {
        if (pathVisit[child])
        {
            ans = true;
        }
        if (vis[child] == false)
        {
            dfs(child);
        }
    }
    pathVisit[par] = false;
}
int main()
{

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    if (ans)
        cout << "Cycle ache";
    else
        cout << "cycle nai";
    return 0;
}