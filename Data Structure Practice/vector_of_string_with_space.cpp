#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> t(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, t[i]);
    }
    for (string g : t)
        cout << g << endl;

    return 0;
}