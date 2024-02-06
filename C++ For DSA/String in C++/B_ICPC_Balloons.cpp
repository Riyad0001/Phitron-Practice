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
        string p;
        cin >> p;
        int cnt[26] = {0};
        int totbal = 0;
        for (int i = 0; i < n; i++)
        {
            cnt[p[i] - 'A']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] > 0)
            {
                totbal += 1 + cnt[i];
            }
        }
        cout << totbal << endl;
    }

    return 0;
}