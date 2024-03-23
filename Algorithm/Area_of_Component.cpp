#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int n, m;
int mat[N][N];
int vis[N][N];
int area = 0;
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
    area = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first;
        int b = par.second;
        q.pop();
        area++;
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
    cin >> n >> m;
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
    int minAr = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 0 && vis[i][j] == false)
            {
                bfs(i, j);
                minAr = min(area, minAr);
            }
        }
    }
    if (minAr == INT_MAX)
        cout << "-1";
    else
        cout << minAr;
    return 0;
}
