#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool gi = true;
        for (int i = 0; i < n; i++)
        {
            if (a[0] != a[i])
            {
                gi = false;
                break;
            }
        }
        if (gi)
            cout << "0" << '\n';
        else
        {
            int L = a[0], R = a[n - 1], cnt1 = 0, cnt2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == L)
                    cnt1++;
                else
                    break;
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (a[i] == R)
                    cnt2++;
                else
                    break;
            }
            if (L == R)
                cout << n - (cnt1 + cnt2) << '\n';
            else
                cout << n - max(cnt1, cnt2) << '\n';
        }
    }

    return 0;
}