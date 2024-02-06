#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int d1 = s[0] - '0';
        int d2 = s[1] - '0';
        int d3 = s[2] - '0';
        int d4 = s[3] - '0';
        int d5 = s[4] - '0';
        int d6 = s[5] - '0';
        if (d1 + d2 + d3 == d4 + d5 + d6)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}