#include <bits/stdc++.h>
using namespace std;
int n;
bool vis[50][50];
char a[50][50];
int dis1[50][50];
int dis2[50][50];
vector<pair<int, int>> v;
bool valid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < n;
}
void bfs(int si, int sj, int cas)
{
    queue<pair<int, int>> p;
    p.push({si, sj});
    vis[si][sj] = true;
    if (cas == 1)
    {
        dis1[si][sj] = 0;
    }
    {
        dis2[si][sj] = 0;
    }
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
            if (valid(new_x, new_y) && vis[new_x][new_y] == false && a[new_x][new_y] != 'O')
            {
                p.push({new_x, new_y});
                vis[new_x][new_y] = true;
                if (cas == 1)
                {
                    dis1[new_x][new_y] = dis1[x][y] + 1;
                }
                {
                    dis2[new_x][new_y] = dis2[x][y] + 1;
                }
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
    int t;
    cin >> t;
    cin >> n;
    while (t--)
    {
        int si, sj, di, dj, ki, kj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'M')
                {
                    si = i;
                    sj = j;
                }
                if (a[i][j] == 'R')
                {
                    di = i;
                    dj = j;
                }
                if (a[i][j] == 'D')
                {
                    ki = i;
                    kj = j;
                }
            }
        }
        memset(vis, false, sizeof(vis));
        memset(dis1, -1, sizeof(dis1));
        bfs(si, sj, 1);
        memset(vis, false, sizeof(vis));
        memset(dis2, -1, sizeof(dis2));
        bfs(di, dj, 3);
        if (dis1[di][dj] + dis2[ki][kj] > 0)
        {
            cout << dis1[di][dj] + dis2[ki][kj] << endl;
        }
        else
            cout << "-1" << endl;
    }

    return 0;
}