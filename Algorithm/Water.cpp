#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back(a[i]);
        }

        sort(v.begin(), v.end());
        int first = v.back();
        v.pop_back();
        int second = v.back();
        int cnt = 0;
        int max1 = -1;
        int max2 = -1;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == first || a[i] == second) && cnt == 0)
            {
                max1 = i;
                cnt++;
            }

            else if ((a[i] == first || a[i] == second) && cnt == 1)
            {
                max2 = i;
                break;
            }
        }
        cout << max1 << " " << max2 << endl;
    }

    return 0;
}