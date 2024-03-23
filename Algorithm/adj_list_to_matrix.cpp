#include <bits/stdc++.h>
using namespace std;
void lis(int V, vector<int> adj[])
{
    int mat[V][V];
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            mat[i][j] = 0;
            if (i == j)
            {
                mat[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < V; i++)
    {
        for (int child : adj[i])
        {
            mat[i][child] = 1;
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
    vector<int> v[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    lis(n, v);
    return 0;
}