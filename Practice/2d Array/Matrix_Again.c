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
    for (int i = 0; i < n; i++)
    {
        printf("%d ", s[m - 1][i]);
    }
    printf("\n");
    for (int j = 0; j < m; j++)
    {
        printf("%d ", s[j][n - 1]);
    }

    return 0;
}