#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
const int N = 1e5 + 2;
int par[N];
int siz[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        siz[i] = 1;
    }
}
int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}
void unionS(int node1, int node2)
{
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);
    if (siz[leader1] < siz[leader2])
    {
        par[leader1] = leader2;
        siz[leader2] += siz[leader1];
    }
    else
    {
        par[leader2] = leader1;
        siz[leader1] += siz[leader2];
    }
}
bool cmp(Edge a, Edge b)
{
    return a.c < b.c;
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> edglis;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edglis.push_back(Edge(a, b, c));
    }
    sort(edglis.begin(), edglis.end(), cmp);
    long long totalcos = 0;
    int m = 0;
    for (Edge v : edglis)
    {
        int leaderA = dsu_find(v.a);
        int leaderB = dsu_find(v.b);
        if (leaderA == leaderB)
        {
            continue;
        }
        else
        {
            unionS(v.a, v.b);
            totalcos += v.c;
            m++;
        }
    }
    if (m == n - 1)
        cout << totalcos;
    else
        cout << "IMPOSSIBLE" << endl;

    return 0;
}