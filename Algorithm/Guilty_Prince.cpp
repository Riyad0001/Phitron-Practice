#include <bits/stdc++.h>
using namespace std;
const int N = 30;
bool vis[N][N];
char a[N][N];
int n,
    m;
vector<pair<int, int>> v = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int cnt;
bool valid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + v[i].first;
        int cj = sj + v[i].second;
        if (valid(ci, cj) && vis[ci][cj] == false && a[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    int t;
    int cs = 1;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        int si, sj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '@')
                {
                    si = i;
                    sj = j;
                }
            }
        }
        cnt = 0;
        memset(vis, false, sizeof(vis));
        dfs(si, sj);
        cout << "Case " << cs++ << ": " << cnt << endl;
    }

    return 0;
}