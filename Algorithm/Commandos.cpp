#include <bits/stdc++.h>
using namespace std;
const int N = 100;
vector<int> v[N];
int dis_from_s[N];
int dis_from_d[N];
bool vis[N];
void bfs(int src, int trac)
{
    queue<int> q;
    q.push(src);
    if (trac == 1)
    {
        dis_from_s[src] = 0;
    }
    else
    {
        dis_from_d[src] = 0;
    }
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
                if (trac == 1)
                {
                    dis_from_s[child] = dis_from_s[par] + 1;
                }
                else
                {
                    dis_from_d[child] = dis_from_d[par] + 1;
                }
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    int cs = 1;
    while (t--)
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
        int s, d;
        cin >> s >> d;
        for (int i = 0; i < n; i++)
        {
            vis[i] = false;
            dis_from_s[i] = -1;
        }
        bfs(s, 1);
        for (int i = 0; i < n; i++)
        {
            vis[i] = false;
            dis_from_d[i] = -1;
        }
        bfs(d, 2);
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int val = dis_from_s[i] + dis_from_d[i];
            ans = max(val, ans);
        }
        cout << "Case " << cs++ << ": " << ans << endl;
        for (int i = 0; i < n; i++)
        {
            v[i].clear();
        }
    }

    return 0;
}