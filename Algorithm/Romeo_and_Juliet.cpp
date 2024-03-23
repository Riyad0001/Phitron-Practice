#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
int vis[N];
vector<int> v[N];
int dis[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    dis[src] = 0;
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
                dis[child] = dis[par] + 1;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src, des, k;
    cin >> src >> des >> k;
    bfs(src);
    if (dis[des] != -1 && dis[des] <= k * 2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}