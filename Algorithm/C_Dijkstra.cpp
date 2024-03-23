#include <bits/stdc++.h>
using namespace std;
const long long N = 1e5 + 2;
long long dis[N];
long long par[N];
vector<pair<long long, long long>> v[N];
class cmp
{
public:
    bool operator()(pair<long long, long long> a, pair<long long, long long> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(long long src)
{
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<long long, long long> paren = pq.top();
        pq.pop();
        long long node = paren.first;
        long long cost = paren.second;
        for (pair<long long, long long> child : v[node])
        {
            long long cn = child.first;
            long long cc = child.second;
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
    long long n, e;
    cin >> n >> e;
    while (e--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    for (long long i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
        par[i] = -1;
    }
    dijkstra(1);
    if (dis[n] == 1e18)
        cout << "-1" << endl;
    else
    {
        int x = n;
        vector<int> z;
        while (x != -1)
        {
            z.push_back(x);
            x = par[x];
        }
        reverse(z.begin(), z.end());
        for (int qn : z)
            cout << qn << " ";
    }
    return 0;
}