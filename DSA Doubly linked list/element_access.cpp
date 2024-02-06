#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ml = {10, 20, 30, 40};
    // cout << ml.front();
    cout << *next(ml.begin(), 1);
    return 0;
}