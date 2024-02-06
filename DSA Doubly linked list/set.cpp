#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    // for (auto fuck = s.begin(); fuck != s.end(); fuck++)
    //     cout << *fuck << endl;
    cout << s.count(10);
    if (s.count(150))
        cout << "YES";
    else
        cout << " NP";
    return 0;
}