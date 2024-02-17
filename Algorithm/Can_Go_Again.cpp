#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 2;
long long dis[N];
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
    vector<Edge> edglis;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        edglis.push_back(Edge(u, v, c));
    }
    int src;
    cin >> src;
    for (long long i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }

    dis[src] = 0;
    for (long long i = 1; i < n; i++)
    {
        for (Edge e : edglis)
        {
            int u = e.u;
            int v = e.v;
            int c = e.c;
            if (dis[u] < LLONG_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cyc = false;
    for (Edge e : edglis)
    {
        int u = e.u;
        int v = e.v;
        int c = e.c;
        if (dis[u] < LLONG_MAX && dis[u] + c < dis[v])
        {
            cyc = true;
            break;
        }
    }
    if (cyc)
        cout << "Negative Cycle Detected" << endl;
    else
    {
        int t;
        cin >> t;
        while (t--)
        {
            int des;
            cin >> des;
            if (dis[des] < LLONG_MAX)
            {
                cout << dis[des] << endl;
            }
            else
            {
                cout << "Not Possible" << endl;
            }
        }
    }

    return 0;
}
