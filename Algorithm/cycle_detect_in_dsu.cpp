#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 3;
int par[N];
int siz[N];
int n, e;
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
int main()
{

    cin >> n >> e;
    dsu_initialize(n);
    bool cyc = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA == leaderB)
            cyc = true;
        else
            unionS(a, b);
    }
    if (cyc)
        cout << "Cycle Detect";
    else
        cout << "No Cycle";
    return 0;
}
