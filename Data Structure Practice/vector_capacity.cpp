#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout << v.max_size() << endl;
    v.push_back(13);

    v.push_back(3);
    // v.clear();
    v.push_back(78);

    v.push_back(78);

    v.push_back(78);
    v.resize(2);
    v.resize(7, 10);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}