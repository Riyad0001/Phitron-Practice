#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int e[n];
    for (int i = 0; i < n; i++)
        cin >> e[i];
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, e[i]);
    }
    cout << mx;
    return 0;
}