#include <stdio.h>
int main()
{

    int n, r, s;
    scanf("%d", &n);
    r = n - 1;
    s = 1;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= s; j++)
        {
            printf("*");
        }
        if (i <= n - 1)
        {
            r--;
            s = s + 2;
        }
        else
        {
            r++;
            s = s - 2;
        }
        printf("\n");
    }

    return 0;
}