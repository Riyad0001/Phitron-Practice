#include <bits/stdc++.h>
using namespace std;
bool gon(long long cur, long long tar)
{
    if (cur == tar)
        return true;
    if (cur > tar)
        return false;
    return gon(cur * 10, tar) || gon(cur * 20, tar);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (gon(1, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}