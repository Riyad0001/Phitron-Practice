#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> c = {5, 7, 8, 5, 3, 2, 5};
    auto it = find(c.begin(), c.end(), 500);
    if (it == c.end())
        cout << "Not Found";
    else
        cout << "Found";

    return 0;
}