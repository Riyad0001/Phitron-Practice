#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> p;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        p.push_back(s);
    }
    for (string f : p)
        cout << f << " ";

    return 0;
}