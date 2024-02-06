#include <bits/stdc++.h>
using namespace std;
vector<int> v[10005];
bool vis[10005];
void bfs(int src, int des)
{
    queue<pair<int, int>> q;
    q.push(make_pair(src, 0));
    vis[src] = true;
    bool paisi = false;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;
        if (par == des)
        {
            cout << level << endl;
            paisi = true;
        }
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push({child, level + 1});
                vis[child] = true;
            }
        }
    }
    if (paisi == false)
        cout << -1 << endl;
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
    int src, destin;
    cin >> src >> destin;
    memset(vis, false, sizeof(vis));
    bfs(src, destin);

    return 0;
}