#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    sort(s, s + n);
    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {

            int ind = (l + r) / 2;
            if (s[ind] == x)
            {
                flag = true;
                break;
            }
            if (x > s[ind])
                l = ind + 1;
            else
                r = ind - 1;
        }

        if (flag == true)
            cout
                << "found" << endl;
        else
            cout << "not found" << endl;
    }
    return 0;
}