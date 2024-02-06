#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int t[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &t[i][j]);
        }
    }
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                s1 += t[i][j];
            }
            if (i + j == n - 1)
            {
                s2 += t[i][j];
            }
        }
    }
    int lo = abs(s1 - s2);
    printf("%d", lo);
    return 0;
}