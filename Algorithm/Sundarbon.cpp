#include <bits/stdc++.h>
using namespace std;
int n;
bool vis[50][50];
char a[50][50];
int dis[50][50];
vector<pair<int, int>> v;
bool valid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < n;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> p;
    p.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!p.empty())
    {
        pair<int, int> par = p.front();
        p.pop();
        int x = par.first;
        int y = par.second;
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + v[i].first;
            int new_y = y + v[i].second;
            if (valid(new_x, new_y) && vis[new_x][new_y] == false && a[new_x][new_y] != 'T')
            {
                p.push({new_x, new_y});
                vis[new_x][new_y] = true;
                dis[new_x][new_y] = dis[x][y] + 1;
            }
        }
    }
}
int main()
{
    v.push_back({0, 1});
    v.push_back({0, -1});
    v.push_back({1, 0});
    v.push_back({-1, 0});
    while (cin >> n)
    {
        int si, sj, di, dj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'S')
                {
                    si = i;
                    sj = j;
                }
                if (a[i][j] == 'E')
                {
                    di = i;
                    dj = j;
                }
            }
        }
        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        bfs(si, sj);
        cout << dis[di][dj] << endl;
    }

    return 0;
}