#include <bits/stdc++.h>
#define pr pair<int, int>
using namespace std;
const long long N = 1e3 + 3;
bool vis[N][N];
char mat[N][N];
map<pr, pr> parent;
long long n, m;
vector<pair<int, int>> v = {
    {0, 1},
    {0, -1},
    {-1, 0},
    {1, 0},
};

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[{si, sj}] = {-1, -1};
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = a + v[i].first;
            int cj = b + v[i].second;
            if (ci >= 0 && ci < n && cj >= 0 && cj < m && !vis[ci][cj] && mat[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[{ci, cj}] = {a, b};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    pair<int, int> src, des;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            mat[i][j] = c;
            if (c == 'D')
                src = {i, j};
            else if (c == 'R')
                des = {i, j};

            vis[i][j] = false;
            parent[{i, j}] = {-1, -1};
        }
    }
    bfs(des.first, des.second);

    if (!vis[src.first][src.second])
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << mat[i][j];
            cout << endl;
        }
    }
    else
    {
        while (parent[src] != make_pair(-1, -1))
        {
            if (mat[src.first][src.second] != 'D' && mat[src.first][src.second] != 'R')
                mat[src.first][src.second] = 'X';
            src = parent[src];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}