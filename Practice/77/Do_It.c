#include <stdio.h>
int main()
{

    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {

        for (int t = 1; t <= k; t++)
        {
            printf("%d ", t);
        }
        printf("\n");
    }

    return 0;
}