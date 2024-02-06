#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int n, m;
int mat[N][N];
int vis[N][N];
int cnt = 0;
vector<pair<int, int>> v = {{0, +1}, {0, -1}, {-1, 0}, {+1, 0}};
bool valid(int x, int y)
{
    return !vis[x][y] && mat[x][y] != -1 && x >= 0 && x < n && y >= 0 && y < m;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first;
        int b = par.second;
        q.pop();
        cnt++;
        for (int i = 0; i < 4; i++)
        {
            int ci = a + v[i].first;
            int cj = b + v[i].second;
            if (valid(ci, cj) == true)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
}
int main()
{
    bool op = true;
    cin >> n >> m;
    vector<int> g;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
                mat[i][j] = -1;
            else
            {
                op = false;
                mat[i][j] = 0;
            }
        }
    }
    if (op)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 0 && vis[i][j] == false)
            {
                cnt = 0;
                bfs(i, j);
                g.push_back(cnt);
            }
        }
    }
    sort(g.begin(), g.end());
    for (int val : g)
        cout << val << " ";
    return 0;
}