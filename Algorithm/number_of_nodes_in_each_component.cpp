#include <bits/stdc++.h>
using namespace std;
const int N = 10e5 + 2;
vector<int> v[N];
bool vis[N];
int cnt = 0;
void dfs(int src)
{
    vis[src] = true;
    cnt++;
    for (int child : v[src])
    {
        if (vis[child] == false)
        {
            dfs(child);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    vector<int> sizof;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            cnt = 0;
            dfs(i);
            sizof.push_back(cnt);
        }
    }
    sort(sizof.begin(), sizof.end());
    for (int siz : sizof)
    {
        cout << siz << " ";
    }

    return 0;
}
