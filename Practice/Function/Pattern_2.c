#include <stdio.h>
int main()
{

    int n, s, t;
    scanf("%d", &n);
    s = n - 1;
    t = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        int k = i;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", k);
            k--;
        }
        s--;
        t++;
        printf("\n");
    }

    return 0;
}