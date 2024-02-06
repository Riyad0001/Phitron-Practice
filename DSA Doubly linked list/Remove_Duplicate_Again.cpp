#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myl;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        myl.push_back(val);
    }
    myl.sort();
    myl.unique();
    for (int val : myl)
        cout << val << " ";
    return 0;
}