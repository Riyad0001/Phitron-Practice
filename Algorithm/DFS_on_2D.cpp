#include <bits/stdc++.h>
using namespace std;
char a[20][20];
bool vis[20][20];
vector<pair<int, int>> v = {{0, +1}, {0, -1}, {-1, 0}, {+1, 0}};
int row, clm;
bool valid(int i, int j)
{
    if (i < 0 || i >= row || j < 0 || j >= clm)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    cout << si << " " << sj << endl;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + v[i].first;
        int cj = sj + v[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            dfs(ci, cj);
        }
    }
}
int main()
{

    cin >> row >> clm;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clm; j++)
        {
            cin >> a[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    return 0;
}