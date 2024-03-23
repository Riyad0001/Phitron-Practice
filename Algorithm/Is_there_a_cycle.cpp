#include <bits/stdc++.h>
using namespace std;
int const N = 51 + 2;
vector<int> v[N];
bool vis[N];
bool ans;
void dfs(int src)
{
    vis[src] = true;
    for (int child : v[src])
    {
        if (vis[child] == true)
        {
            ans = true;
            return;
        }
        dfs(child);
    }
    vis[src] = false;
}
int main()
{
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1)
                v[i].push_back(j);
        }
    }
    memset(vis, false, sizeof(vis));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            if (ans)
                break;
        }
    }
    if (ans)
        cout << "1" << endl;
    else
        cout << "0" << endl;

    return 0;
}