#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> s = {10, 20, 40};
    // vector<int> t = {1, 8, 7, 10};
    // s = t;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << " ";
    // }
    // s.pop_back();
    // s.push_back(56);
    vector<int> p = {5, 8, 9, 10};
    s.insert(s.begin() + 1, p.begin(), p.end());
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}