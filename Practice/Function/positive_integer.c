#include <stdio.h>
int main()
{

    int n, s, t;
    scanf("%d", &n);
    s = 2 * n - 1;
    t = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= t; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= s; k++)
        {
            printf("*");
        }

        s = s - 2;
        t++;
        printf("\n");
    }

    return 0;
}