#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> s;
    char t;
    int cnt[26] = {0};
    int i = 0;
    while (cin >> t)
    {
        s.push_back(t);
        cnt[s[i] - 'a']++;
        i++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > 0)
        {
            cout << char(i + 'a') << " : " << cnt[i] << endl;
        }
    }

    return 0;
}