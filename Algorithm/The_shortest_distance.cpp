// #include <bits/stdc++.h>
// using namespace std;
// bool vis[1000];
// int dis[1000];
// vector<int> v[1000];
// void bfs(int src)
// {
//     queue<int> q;
//     q.push(src);
//     dis[src] = 0;
//     vis[src] = true;
//     while (!q.empty())
//     {
//         int par = q.front();
//         q.pop();
//         for (int child : v[par])
//         {
//             if (vis[child] == false)
//             {
//                 q.push(child);
//                 vis[child] = true;
//                 dis[child] = dis[par] + 1;
//             }
//         }
//     }
// }
// int main()
// {
//     int n, d;
//     cin >> n >> d;
//     int mat[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> mat[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (mat[i][j] == 1)
//             {
//                 v[i].push_back(j);
//             }
//         }
//     }
//     bfs(d - 1);
//     for (int l : dis)
//         cout << l << " ";

//     return 0;
// }
#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

void bfs(const vector<vector<int>> &graph, int start, int n)
{
    vector<int> dist(n + 1, INT_MAX);
    vector<bool> visited(n + 1, false);
    queue<int> q;

    dist[start] = 0;
    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v = 1; v <= n; ++v)
        {
            if (graph[u][v] && !visited[v])
            {
                q.push(v);
                visited[v] = true;
                dist[v] = dist[u] + 1;
            }
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << (dist[i] != INT_MAX ? dist[i] : -1) << " ";
    }
}

int main()
{
    int n, s;
    cin >> n >> s;

    vector<vector<int>> graph(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> graph[i][j];
        }
    }

    bfs(graph, s, n);

    return 0;
}
