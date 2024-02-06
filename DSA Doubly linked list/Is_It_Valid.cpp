#include <bits/stdc++.h>
using namespace std;
bool ggi(string &s)
{
    stack<int> p;
    for (int c : s)
    {
        if (c == '0')
        {
            if (!p.empty() && p.top() == '1')
            {
                p.pop();
            }
            else
            {
                p.push('0');
            }
        }
        else if (c == '1')
        {
            if (!p.empty() && p.top() == '0')
            {
                p.pop();
            }
            else
            {
                p.push('1');
            }
        }
    }
    return p.empty();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (ggi(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}