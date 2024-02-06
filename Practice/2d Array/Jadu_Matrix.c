#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int s[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &s[i][j]);
        }
    }
    int flag = 1;
    if (m != n)
    {
        flag = 0;
    }
    for (int i = 0; i < m; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (i == k || i + k == m - 1)
            {
                if (s[i][k] != 1)
                    flag = 0;
                continue;
            }
            if (s[i][k] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}