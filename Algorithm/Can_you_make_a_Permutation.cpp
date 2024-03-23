#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<bool> cnt(10000, false);
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            cnt[y] = true;
        }
        int zero = 0;
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] == false)
                zero++;
        }
        if (x >= zero)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}