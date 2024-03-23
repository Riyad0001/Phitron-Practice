#include <bits/stdc++.h>
using namespace std;
long long maxCoins(vector<long long> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    if (n == 1)
        return nums[0];
    vector<long long> dp(n);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
    }
    return dp[n - 1];
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        int n;
        cin >> n;

        vector<long long> coins(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> coins[j];
        }

        long long result = maxCoins(coins);
        cout << "Case " << i << ": " << result << endl;
    }

    return 0;
}