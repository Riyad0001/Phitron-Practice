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
    int n, w;
    cin >> n >> w;
    int val[n], weight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << Unbounded_Knapsack(n, val, weight, w);
    return 0;
}