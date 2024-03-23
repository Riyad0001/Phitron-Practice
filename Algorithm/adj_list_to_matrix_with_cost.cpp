#include <bits/stdc++.h>
using namespace std;
void lis(int V, vector<pair<int, int>> adj[])
{
    int mat[V][V];
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            mat[i][j] = -1;
            if (i == j)
            {
                mat[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < V; i++)
    {
        for (pair<int, int> child : adj[i])
        {
            int childNode = child.first;
            int cost = child.second;
            mat[i][childNode] = cost;
        }
    }

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> v[n];
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    lis(n, v);
    return 0;
}