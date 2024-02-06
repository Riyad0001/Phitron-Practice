#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> s = {6, 7, 9, 00, 12};
    s.erase(s.begin() + 2, s.end() - 1);
    for (int x : s)
        cout << x << " ";
    return 0;
}