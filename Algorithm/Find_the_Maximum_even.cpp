#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            ans = max(ans, a[i]);
        }
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                int sum = a[i] + a[j];
                if (sum % 2 == 0)
                {
                    ans = max(ans, sum);
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}