#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    long long a, b, c;
    Edge(long long a, long long b, long long c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
const long long N = 1e5 + 3;
long long par[N];
long long siz[N];
void dsu_initialize(long long n)
{
    for (long long i = 0; i < n; i++)
    {
        par[i] = -1;
        siz[i] = 1;
    }
}
long long dsu_find(long long node)
{
    if (par[node] == -1)
        return node;
    long long leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}
void dsu_union_by_size(long long node1, long long node2)
{
    long long leader1 = dsu_find(node1);
    long long leader2 = dsu_find(node2);
    if (siz[leader1] > siz[leader2])
    {
        par[leader2] = leader1;
        siz[leader1] += siz[leader2];
    }
    else
    {
        par[leader1] = leader2;
        siz[leader2] += siz[leader1];
    }
}
bool cmp(Edge a, Edge b)
{
    return a.c < b.c;
}
int main()
{
    long long n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> edglis;
    long long cnt = 0;
    while (e--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        edglis.push_back(Edge(a, b, c));
    }
    sort(edglis.begin(), edglis.end(), cmp);
    long long totalcos = 0;
    for (Edge v : edglis)
    {
        long long leaderA = dsu_find(v.a);
        long long leaderB = dsu_find(v.b);
        if (leaderA == leaderB)
        {
            continue;
        }
        else
        {
            dsu_union_by_size(v.a, v.b);
            totalcos += v.c;
            cnt++;
        }
    }
    if (cnt == n - 1)
        cout << totalcos;
    else
        cout << "-1";

    return 0;
}