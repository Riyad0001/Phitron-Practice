#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        string w;
        stringstream ss(s);
        map<string, int> mp;
        int maxCou = INT_MIN;
        string p;
        while (ss >> w)
        {
            mp[w]++;
            if (mp[w] > maxCou)
            {
                maxCou = mp[w];
                p = w;
            }
        }
        cout << p << " " << maxCou << endl;
    }

    return 0;
}