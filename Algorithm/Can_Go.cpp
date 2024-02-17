#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
vector<pair<int, int>> v[N];
long long dis[N];
void djikstra(long long src)
{
    queue<pair<long long, long long>> q;
    q.push({src, 0});
    dis[src] = 0;
    while (!q.empty())
    {
        pair<long long, long long> par = q.front();
        q.pop();
        long long node = par.first;
        long long cost = par.second;
        for (pair<long long, long long> child : v[node])
        {
            long long childNode = child.first;
            long long childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                q.push({childNode, cost + childCost});
                dis[childNode] = cost + childCost;
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
        v[a].push_back(make_pair(b, c));
    }
    for (long long i = 0; i <= n; i++)
    {
        dis[i] = 1e18;
    }
    long long src;
    cin >> src;
    djikstra(src);
    long long t;
    cin >> t;
    while (t--)
    {
        long long des, cos;
        cin >> des >> cos;
        if (dis[des] <= cos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}