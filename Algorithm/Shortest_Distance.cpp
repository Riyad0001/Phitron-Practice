#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = LLONG_MAX;
            if (i == j)
            {
                adj[i][j] = 0;
            }
        }
    }
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b], c);
    }
    for (ll k = 1; k <= n; k++)
    {
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                if (adj[i][k] != LLONG_MAX && adj[k][j] != LLONG_MAX && adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = (adj[i][k] + adj[k][j]);
                }
            }
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (adj[a][b] != LLONG_MAX)
            cout << adj[a][b] << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}
