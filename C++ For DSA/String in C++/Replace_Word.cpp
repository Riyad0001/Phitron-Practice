#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;
        int pos = s.find(x);
        while (s.find(x) != -1)
        {
            s.replace(pos, x.length(), "#");
            pos = s.find(x, pos + 1);
        }
        cout << s << endl;
    }

    return 0;
}