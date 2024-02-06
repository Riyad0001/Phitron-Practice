#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> l;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.push_back(x);
        int cur_index = l.size() - 1;
        while (cur_index != 0)
        {
            int parent_ind = (cur_index - 1) / 2;
            if (l[parent_ind] < l[cur_index])
            {
                swap(l[parent_ind], l[cur_index]);
            }
            else
                break;
            cur_index = parent_ind;
        }
    }

    for (int val : l)
        cout << val << " ";
    return 0;
}