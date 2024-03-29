#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5 + 4;
int par[N];
int siz[N];
void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
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
    dsu_initialize(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int led1 = dsu_find(a);
        int led2 = dsu_find(b);
        if (led1 != led2)
        {
            dsu_union_by_size(a, b);
        }
    }
    set<int> leader;
    for (int i = 1; i <= n; i++)
    {
        leader.insert(dsu_find(i));
    }
    cout << leader.size() - 1 << endl;
    // for (int r : leader)
    // {
    //     cout << r << " ";
    // }
    auto it = leader.begin();
    while (next(it) != leader.end())
    {
        cout << *it << " " << *next(it) << endl;
        it++;
    }

    return 0;
}