#include <bits/stdc++.h>
using namespace std;
int findMax(int mat[][10], int row, int clm, int n, int m)
{
    if (row == n && clm == m)
    {
        return mat[row][clm];
    }
    int maxS = INT_MIN;
    if (row < n)
    {
        maxS = max(maxS, mat[row][clm] + findMax(mat, row + 1, clm, n, m));
    }
    if (clm < m)
    {
        maxS = max(maxS, mat[row][clm] + findMax(mat, row, clm + 1, n, m));
    }
    return maxS;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int mat[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << findMax(mat, 0, 0, n - 1, m - 1);
    return 0;
}