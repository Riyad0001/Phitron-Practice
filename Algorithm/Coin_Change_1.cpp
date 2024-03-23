#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int wet[n];
    for (int i = 0; i < n; i++)
    {
        cin >> wet[i];
    }
    int s;
    cin >> s;
    int dp[n + 1][s + 1];
    dp[0][0] = 1;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int x = 0; x <= s; x++)
        {
            if (wet[i - 1] <= x)
            {
                dp[i][x] = dp[i][x - wet[i - 1]] + dp[i - 1][x];
            }
            else
            {
                dp[i][x] = dp[i - 1][x];
            }
        }
    }
    cout << dp[n][s];

    return 0;
}