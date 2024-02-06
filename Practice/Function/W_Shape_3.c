#include <stdio.h>
int main()
{

    int n, t, w;
    scanf("%d", &n);
    t = n - 1;
    w = 1;

    for (int i = 1; i <= (2 * n); i++)
    {
        for (int j = 1; j <= t; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= w; j++)
        {
            printf("*");
        }

        if (i < n)
        {
            t--;
            w = w + 2;
        }
        else if (i > n)
        {
            t++;
            w = w - 2;
        }
        printf("\n");
    }

    return 0;
}