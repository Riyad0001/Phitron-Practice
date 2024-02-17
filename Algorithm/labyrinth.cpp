#include <bits/stdc++.h>
using namespace std;
int m, n;
const int N = 1005;
int vis[N][N];
int mat[N][N];
int si, sj, di, dj;
pair<int, int> path[N][N];
vector<pair<int, int>>
    v = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool valid(int x, int y)
{
    return !vis[x][y] && x >= 0 && x < n && y >= 0 && y < m;
}
void bfs()
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int x = par.first;
        int y = par.second;
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + v[i].first;
            int new_y = y + v[i].second;
            if (valid(new_x, new_y))
            {
                vis[new_x][new_y] = true;
                path[new_x][new_y] = {v[i].first, v[i].second};
                q.push({new_x, new_y});
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            path[i][j] = {-1, -1};
            char c;
            cin >> c;
            if (c == '#')
            {
                vis[i][j] = true;
            }
            if (c == 'A')
            {
                si = i;
                sj = j;
            }
            if (c == 'B')
            {
                di = i;
                dj = j;
            }
        }
    }
    bfs();
    if (!vis[di][dj])
    {
        cout << "NO" << endl;
        return 0;
    }

    else
        cout << "YES" << endl;
    vector<pair<int, int>> ans;
    pair<int, int> dest = {di, dj};
    while (dest.first != si || dest.second != sj)
    {
        ans.push_back({path[dest.first][dest.second]});
        dest.first -= ans.back().first;
        dest.second -= ans.back().second;
    }
    reverse(ans.begin(), ans.end());
    // for (auto i : ans)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    cout << ans.size() << endl;
    for (auto i : ans)
    {
        if (i.first == 1 and i.second == 0)
            cout << "D";
        if (i.first == -1 and i.second == 0)
            cout << "U";
        if (i.first == 0 and i.second == -1)
            cout << "L";
        if (i.first == 0 and i.second == 1)
            cout << "R";
    }

    return 0;
}