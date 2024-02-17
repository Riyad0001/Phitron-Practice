#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main()
{
    int n;
    cin >> n;
    int adk[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adk[i][j];
            if (adk[i][j] == -1)
            {
                adk[i][j] = INF;
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adk[i][k] != INF && adk[k][j] != INF)
                {
                    adk[i][j] = min(adk[i][j], adk[i][k] + adk[k][j]);
                }
            }
        }
    }
    int max_shot_dis = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adk[i][j] != INF && adk[i][j] > max_shot_dis)
            {
                max_shot_dis = adk[i][j];
            }
        }
    }
    cout << max_shot_dis << endl;
    return 0;
}
