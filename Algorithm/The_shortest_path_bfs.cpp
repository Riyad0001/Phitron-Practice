#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 4;
vector<int> v[N];
bool vis[N];
int dis[N];
int prn[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    dis[src] = 0;
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
                dis[child] = dis[par] + 1;
                prn[child] = par;
            }
        }
    }
}
int main()
{
    int n, e, src, des;
    cin >> n >> e >> src >> des;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(src);
    if (dis[des] == -1)
        cout << "-1" << endl;
    else
    {
        cout << dis[des] << endl;
        int x = des;
        vector<int> z;
        while (x != src)
        {
            z.push_back(x);
            x = prn[x];
        }
        z.push_back(src);
        reverse(z.begin(), z.end());
        for (int qn : z)
            cout << qn << " ";
    }
    return 0;
}
