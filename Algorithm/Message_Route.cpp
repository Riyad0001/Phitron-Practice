#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

vector<int> bfs(int n, vector<vector<int>> &adj, int start)
{
    vector<int> dist(n + 1, INF);
    vector<int> parent(n + 1, -1);
    queue<int> q;

    q.push(start);
    dist[start] = 0;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for (int neighbor : adj[current])
        {
            if (dist[neighbor] == INF)
            {
                dist[neighbor] = dist[current] + 1;
                parent[neighbor] = current;
                q.push(neighbor);
            }
        }
    }

    return parent;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> parent = bfs(n, adj, 1);

    if (parent[n] == -1)
    {
        cout << "IMPOSSIBvgLE\n";
    }
    else
    {
        vector<int> route;
        int current = n;

        while (current != -1)
        {
            route.push_back(current);
            current = parent[current];
        }

        reverse(route.begin(), route.end());

        cout << route.size() << "\n";
        for (int node : route)
        {
            cout << node << " ";
        }
        cout << "\n";
    }

    return 0;
}
