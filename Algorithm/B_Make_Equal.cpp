#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        int k = sum / n;
        int carry = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > k)
            {
                carry += v[i] - k;
                v[i] = k;
            }
            else
            {
                int need = k - v[i];
                if (carry >= need)
                {
                    v[i] = k;
                    carry -= need;
                }
            }
        }
        bool bal = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != k)
            {
                bal = false;
                break;
            }
        }
        if (bal)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}