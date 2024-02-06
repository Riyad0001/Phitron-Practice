#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int f[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &f[i]);
    }
    int min = f[0];
    int minCnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (f[i] < min)
        {
            min = f[i];
            minCnt = 1;
        }
        else if (f[i] == min)
        {
            minCnt++;
        }
    }
    if (minCnt % 2 == 1)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}