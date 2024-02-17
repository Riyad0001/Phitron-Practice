#include <bits/stdc++.h>
using namespace std;
int n, m;
bool vis[1005][1005];
int dis[1004][1004];
int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};
bool valid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && !vis[x][y];
}
void dfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int x = par.first;
        int y = par.second;
        for (int i = 0; i < 8; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if (valid(new_x, new_y))
            {
                q.push({new_x, new_y});
                vis[new_x][new_y] = true;
                dis[new_x][new_y] = dis[x][y] + 1;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int mat[n][m];
        int si, sj;
        int di, dj;
        cin >> si >> sj >> di >> dj;
        memset(dis, -1, sizeof(dis));
        memset(vis, false, sizeof(vis));
        dfs(si, sj);
        cout << dis[di][dj] << endl;
    }

    return 0;
}
