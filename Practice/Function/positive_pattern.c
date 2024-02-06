#include <stdio.h>
int main()
{

    int n, s, t;
    scanf("%d", &n);
    s = n - 1;
    t = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= t; i++)
        {
            printf("*");
        }
        s--;
        t++;
        printf("\n");
    }
    return 0;
}