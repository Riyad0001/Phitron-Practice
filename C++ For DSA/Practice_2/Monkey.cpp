#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        int n = s.size();
        sort(s.begin(), s.end());
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ' ')

                continue;
            else
                cout << s[i];
        }
        cout << endl;
    }

    return 0;
}