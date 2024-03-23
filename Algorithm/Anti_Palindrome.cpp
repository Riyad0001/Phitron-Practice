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
        string s;
        cin >> s;
        if (n % 2 != 0)
        {
            cout << "NO" << '\n';
            continue;
        }
        map<char, int> mpt;
        priority_queue<pair<int, char>> pq;
        for (char c : s)
        {
            mpt[c]++;
        }
        for (auto it : mpt)
        {
            int value = it.second;
            int key = it.first;
            pq.push({value, key});
        }
        vector<char> ans(n);
        int l = 0, r = n - 1;
        bool ok = true;
        while (!pq.empty())
        {
            if (pq.size() == 1)
            {
                ok = false;
                break;
            }
            pair<int, char> p1, p2;
            p1 = pq.top();
            pq.pop();
            p2 = pq.top();
            pq.pop();
            ans[l] = p1.second;
            ans[r] = p2.second;
            if (p1.first > 1)
            {
                pq.push({p1.first - 1, p1.second});
            }
            if (p2.first > 1)
            {
                pq.push({p2.first - 1, p2.second});
            }
            l++;
            r--;
        }
        if (ok)
        {
            cout << "YES" << '\n';
            for (int i = 0; i < n; i++)
            {
                cout << ans[i];
            }
            cout << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}