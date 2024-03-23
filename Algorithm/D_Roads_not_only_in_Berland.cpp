#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
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
    if (leader1 != leader2)
    {
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
}
int main()
{
    int n;
    cin >> n;
    dsu_initialize(n);
    vector<pair<int, int>> bad;
    vector<pair<int, int>> ct;
    int e = n - 1;
    for (int i = 1; i <= e; i++)
    {
        int a, b;
        cin >> a >> b;
        int led1 = dsu_find(a);
        int led2 = dsu_find(b);
        if (led1 == led2)
        {
            bad.push_back({a, b});
        }
        else
        {
            dsu_union_by_size(a, b);
        }
    }
    cout << bad.size() << endl;
    for (int i = 2; i <= n; i++)
    {
        int led1 = dsu_find(1);
        int led2 = dsu_find(i);
        if (led1 != led2)
        {

            ct.push_back({1, i});
            dsu_union_by_size(1, i);
        }
    }
    for (int i = 0; i < bad.size(); i++)
    {
        cout << bad[i].first << " " << bad[i].second << " " << ct[i].first << " " << ct[i].second << endl;
    }

    return 0;
}