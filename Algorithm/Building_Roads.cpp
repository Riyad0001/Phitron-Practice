#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> v[10005];
bool vis[10005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
}
int main()
{
    memset(vis, false, sizeof(vis));
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector<int> ve;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == false)
        {
            bfs(i);
            ve.push_back(i);
        }
    }
    int road = ve.size() - 1;
    cout << road << endl;
    for (int i = 0; i < ve.size() - 1; i++)
    {
        cout << ve[i]
             << " " << ve[i + 1] << endl;
    }

    return 0;
}
