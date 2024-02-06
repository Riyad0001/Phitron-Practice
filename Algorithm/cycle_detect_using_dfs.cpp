#include <bits/stdc++.h>
using namespace std;
const int N = 10e5 + 3;
vector<int> adj[N];
bool vis[N];
int parentArray[N];
bool ans;
void dfs(int par)
{
    vis[par] = true;
    for (int child : adj[par])
    {
        if (vis[child] == true && parentArray[par] != child)
        {
            ans = true;
        }
        if (vis[child] == false)
        {
            parentArray[child] = par;
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
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
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