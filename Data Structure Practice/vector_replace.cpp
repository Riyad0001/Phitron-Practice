#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> d = {1, 5, 1, 8, 7, 6, 1, 6, 1};
    replace(d.begin(), d.end(), 1, 99);
    for (int c : d)
        cout << c << " ";
    return 0;
}