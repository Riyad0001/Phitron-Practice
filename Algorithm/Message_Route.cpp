// #include <bits/stdc++.h>
// using namespace std;

// const int INF = 1e9;

// vector<int> bfs(int n, vector<vector<int>> &adj, int start)
// {
//     vector<int> dist(n + 1, INF);
//     vector<int> parent(n + 1, -1);
//     queue<int> q;

//     q.push(start);
//     dist[start] = 0;

//     while (!q.empty())
//     {
//         int current = q.front();
//         q.pop();

//         for (int neighbor : adj[current])
//         {
//             if (dist[neighbor] == INF)
//             {
//                 dist[neighbor] = dist[current] + 1;
//                 parent[neighbor] = current;
//                 q.push(neighbor);
//             }
//         }
//     }

//     return parent;
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> adj(n + 1);
//     for (int i = 0; i < m; ++i)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }

//     vector<int> parent = bfs(n, adj, 1);

//     if (parent[n] == -1)
//     {
//         cout << "IMPOSSIBvgLE\n";
//     }
//     else
//     {
//         vector<int> route;
//         int current = n;

//         while (current != -1)
//         {
//             route.push_back(current);
//             current = parent[current];
//         }

//         reverse(route.begin(), route.end());

//         cout << route.size() << "\n";
//         for (int node : route)
//         {
//             cout << node << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
int vis[N];
vector<int> v[N];
int dis[N];
int prn[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    dis[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                dis[child] = dis[par] + 1;
                prn[child] = par;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    memset(prn, -1, sizeof(prn));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(1);
    if (dis[n] == -1)
        cout << "IMPOSSIBLE" << endl;
    else
    {
        cout << dis[n] + 1 << endl;
        int x = n;
        vector<int> z;
        while (x != -1)
        {
            z.push_back(x);
            x = prn[x];
        }
        reverse(z.begin(), z.end());
        for (int qn : z)
            cout << qn << " ";
    }
    return 0;
}
