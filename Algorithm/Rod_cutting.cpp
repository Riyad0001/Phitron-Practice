#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int Unbounded_Knapsack(int n, int val[], int weight[], int w)
{
    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    if (weight[n - 1] <= w)
    {
        int op1 = Unbounded_Knapsack(n, val, weight, w - weight[n - 1]) + val[n - 1];
        int op2 = Unbounded_Knapsack(n - 1, val, weight, w);
        return dp[n][w] = max(op1, op2);
    }
    else
    {
        return dp[n][w] = Unbounded_Knapsack(n - 1, val, weight, w);
    }
}
int main()
{
    int n;
    cin >> n;
    int val[n], wet[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
        wet[i] = i + 1;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << Unbounded_Knapsack(n, val, wet, n);
    return 0;
}