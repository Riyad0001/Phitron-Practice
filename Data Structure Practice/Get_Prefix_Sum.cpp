#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int ra[n];
    for (int i = 0; i < n; i++)
        cin >> ra[i];
    long long int prf[n];
    prf[0] = ra[0];
    for (int i = 1; i < n; i++)
    {
        prf[i] = ra[i] + prf[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << prf[i] << " ";
    }

    return 0;
}