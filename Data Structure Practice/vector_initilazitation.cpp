#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; type 1
    // vector<int> v(5); type 2
    // vector<int> v(7, 199); type 3
    // vector<int> v2(4, 70); type 4
    // vector<int> v(v2);
    // int m[8] = {0, 1, 2, 3, 9, 10, 88, 80}; // type 5
    // vector<int> v(m, m + 8);
    vector<int> v = {33, 77, 100, 980};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v.size() << endl;
    return 0;
}