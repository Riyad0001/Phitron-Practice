#include <stdio.h>

int main()
{
    int n, t, w;
    scanf("%d", &n);
    t = n - 1;
    w = 1;

    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= t; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= w; j++)
        {
            printf("*");
        }
        printf("\n");

        if (i < n)
        {
            t--;
            w = w + 2;
        }
        else
        {
            t++;
            w = w - 2;
        }
    }

    return 0;
}
