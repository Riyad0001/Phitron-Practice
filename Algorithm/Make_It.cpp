#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 6;
int dp[N];
bool gon(int cur, int tar)
{
    if (cur == tar)
        return true;
    if (cur > tar)
        return false;
    if (dp[cur] != -1)
    {
        return dp[cur];
    }
    return dp[cur] = gon(cur + 3, tar) || gon(cur * 2, tar);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // for (int i = 1; i <= n; i++)
        // {
        //     dp[i] = -1;
        // }
        memset(dp, -1, sizeof(dp));
        if (gon(1, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}