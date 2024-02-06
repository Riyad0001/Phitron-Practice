#include <stdio.h>
int main()
{

    int m, n;
    scanf("%d %d", &m, &n);
    int q[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int l = 0; l < n; l++)
        {
            scanf("%d", &q[i][l]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            printf("%d ", q[i][j]);
        }
        printf("\n");
    }
    return 0;
}