#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> &l, int x)
{
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
void delete_heap(vector<int> &l)
{
    l[0] = l[l.size() - 1];
    l.pop_back();
    int cur = 0;
    while (true)
    {
        int left_ind = cur * 2 + 1;
        int right_ind = cur * 2 + 2;
        int last_ind = l.size() - 1;
        if (left_ind <= last_ind && right_ind <= last_ind)
        {
            // left right duitai ache
            if (l[left_ind] <= l[right_ind] && l[cur] < l[right_ind])
            {
                swap(l[cur], l[right_ind]);
                cur = right_ind;
            }
            else if (l[left_ind] >= l[right_ind] && l[cur] < l[left_ind])
            {
                swap(l[cur], l[left_ind]);
                cur = left_ind;
            }
            else
            {
                break;
            }
        }
        else if (left_ind <= last_ind)
        {
            // Left_ache
            if (l[cur] < l[left_ind])
            {
                swap(l[cur], l[left_ind]);
                cur = left_ind;
            }
            else
            {
                break;
            }
        }
        else if (right_ind <= last_ind)
        {
            // Right ache
            if (l[cur] < l[right_ind])
            {
                swap(l[cur], l[right_ind]);
                cur = right_ind;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}
void print_heap(vector<int> l)
{
    for (int val : l)
        cout << val << " ";
}
int main()
{
    int n;
    cin >> n;
    vector<int> l;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert(l, x);
    }
    delete_heap(l);
    print_heap(l);
    cout << endl;
    delete_heap(l);
    print_heap(l);
    return 0;
}