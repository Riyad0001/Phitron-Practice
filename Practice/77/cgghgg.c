#include <stdio.h>
int main()
{

    int n, s, t;
    scanf("%d", &n);
    s = n - 1, t = 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= t; j++)
        {
            printf("*");
        }
        s--;
        t = t + 2;
        printf("\n");
    }

    return 0;
}