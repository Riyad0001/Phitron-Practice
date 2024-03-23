#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
int dis[N];
int par[N];
vector<pair<int, int>> v[N];
class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<int, int> paren = pq.top();
        pq.pop();
        int node = paren.first;
        int cost = paren.second;
        for (pair<int, int> child : v[node])
        {
            int cn = child.first;
            int cc = child.second;
            if (cost + cc < dis[cn])
            {
                pq.push({cn, cost + cc});
                dis[cn] = cost + cc;
                par[cn] = node;
            }
        }
    }
}
int main()
{
    int n, e, src, des;
    cin >> n >> e >> src >> des;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = 1e9;
        par[i] = -1;
    }
    dijkstra(src);
    if (dis[des] == 1e9)
        cout << "-1" << endl;
    else
    {
        cout << dis[des] << endl;
        int x = des;
        vector<int> z;
        while (x != src)
        {
            z.push_back(x);
            x = par[x];
        }
        z.push_back(src);
        reverse(z.begin(), z.end());
        for (int qn : z)
            cout << qn << " ";
    }
    return 0;
}