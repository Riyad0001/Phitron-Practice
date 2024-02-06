#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        stack<char> s;
        string m;
        cin >> m;
        for (char f : m)
        {
            if (f == '1')
            {
                if (!s.empty() && s.top() == '0')
                {
                    s.pop();
                }
                else
                {
                    s.push(f);
                }
            }
            else
            {
                s.push(f);
            }
        }
        if (s.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}