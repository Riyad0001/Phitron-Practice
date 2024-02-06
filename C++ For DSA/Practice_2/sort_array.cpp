#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;
    int t[s];
    for (int i = 0; i < s; i++)
        cin >> t[i];
    sort(t, t + s);
    for (int i = 0; i < s; i++)

        cout << t[i] << " ";
    cout << endl;
    sort(t, t + s, greater<int>());
    for (int i = 0; i < s; i++)
        cout << t[i] << " ";
    return 0;
}