#include <stdio.h>
int main()
{
    int m, n, x;
    scanf("%d %d", &m, &n);
    int r[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &r[i][j]);
        }
    }
    scanf("%d", &x);
    int flag = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x == r[i][j])
            {
                flag = 1;
                break;
            }
        }
        break;
    }
    if (flag = 0)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    return 0;
}