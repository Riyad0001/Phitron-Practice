#include <bits/stdc++.h>
using namespace std;

int dis[10000];
class Edge
{
public:
    int u;
    int v;
    int c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> Edgelist;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        Edgelist.push_back(Edge(u, v, c));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[1] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge e : Edgelist)
        {
            int u = e.u;
            int v = e.v;
            int c = e.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    // sort(dis, dis + n);
    for (int i = 1; i <= n; i++)
    {
        if (dis[i] == INT_MAX)
        {
            cout << "30000 ";
        }
        else
            cout << dis[i] << " ";
    }
    return 0;
}