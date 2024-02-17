#include <bits/stdc++.h>
using namespace std;
int n, m;
int mat[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> v = {{0, +1}, {0, -1}, {-1, 0}, {+1, 0}};
bool valid(int x, int y)
{
    return !vis[x][y] && mat[x][y] != -1 && x >= 0 && x < n && y >= 0 && y < m;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + v[i].first, cj = sj + v[i].second;
        if (valid(ci, cj))
            dfs(ci, cj);
    }
}
int main()
{
    cin >> n >> m;
    memset(mat, -1, sizeof(mat));
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '-')
                mat[i][j] = -1;
            else
                mat[i][j] = 0;
        }
    }
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    dfs(si, sj);
    if (vis[di][dj])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}