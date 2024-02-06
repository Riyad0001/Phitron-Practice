#include <stdio.h>
int main()
{
    int n, s, t;
    scanf("%d", &n);
    s = n - 1;
    t = 1;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= t; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        if (i <= n - 1)
        {
            s--;
            t = t + 2;
        }
        else
        {

            s++;
            t = t - 2;
        }
        printf("\n");
    }

    return 0;
}