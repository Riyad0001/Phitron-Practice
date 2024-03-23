#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
int par[N];
int siz[N];
int level[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        siz[i] = 1;
        level[i] = 0;
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
void dsu_union_by_size(int node1, int node2)
{
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);
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
int main()
{
    int n, e;
    cin >> n >> e;
    int cnt = 0;
    dsu_initialize(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int led1 = dsu_find(a);
        int led2 = dsu_find(b);
        if (led1 == led2)
        {
            cnt++;
            continue;
        }
        else
        {
            dsu_union_by_size(a, b);
        }
    }
    cout << cnt;

    return 0;
}