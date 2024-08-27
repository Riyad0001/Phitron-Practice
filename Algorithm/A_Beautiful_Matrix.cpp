#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mat[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
        }
    }
    pair<int, int> p;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat[i][j] == 1)
            {
                p = make_pair(i, j);
            }
        }
    }
    int mov = abs(p.first - 2) + abs(p.second - 2);
    cout << mov << endl;

    return 0;
}