#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin >> n >> q;
    long long int ra[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ra[i];
    }
    long long int prf[n];
    prf[0] = ra[0];
    for (int i = 1; i < n; i++)
    {
        prf[i] = ra[i] + prf[i - 1];
    }

    while (q--)
    {
        long long int l, r;
        cin >> l >> r;
        l--;
        r--;
        long long int sum;
        if (l == 0)
            sum = prf[r];
        else
            sum = prf[r] - prf[l - 1];
        cout
            << sum << endl;
    }

    return 0;
}