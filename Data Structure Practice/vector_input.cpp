#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> p;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     p.push_back(x);
    // }
    // for (int t : p)
    //     cout << t << " ";
    // 2nd system
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
        cin >> t[i];
    for (int y : t)
        cout << y << " ";
    return 0;
}