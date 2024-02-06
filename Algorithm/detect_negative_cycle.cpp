#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
int dis[N];
class Edge
{
public:
    int u, v, c;
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
    vector<Edge> edgeList;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        edgeList.push_back(Edge(u, v, c));
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (Edge e : edgeList)
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
    bool cycle = false;
    for (Edge e : edgeList)
    {
        int u = e.u;
        int v = e.v;
        int c = e.c;
        if (dis[u] < INT_MAX && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
    {
        cout << "Cycle DEtect.No enswer";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << "->" << dis[i] << endl;
        }
    }

    return 0;
}