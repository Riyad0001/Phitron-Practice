#include <bits/stdc++.h>
using namespace std;
int main()
{
    string d;
    getline(cin, d);
    stringstream ff;
    ff << d;
    string nuli;
    int cnt = 0;
    while (ff >> nuli)
    {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}