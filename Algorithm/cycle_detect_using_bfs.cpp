#include <bits/stdc++.h>
using namespace std;
const int N = 10e5 + 3;
vector<int> adj[N];
bool vis[N];
int parentArray[N];
bool ans;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : adj[par])
        {
            if (vis[child] == true && parentArray[par] != child)
            {
                ans = true;
            }
            if (vis[child] == false)
            {
                vis[child] = true;
                parentArray[child] = par;
                q.push(child);
            }
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
            bfs(i);
    }
    if (ans)
        cout << "Cycle ache";
    else
        cout << "cycle nai";
    return 0;
}