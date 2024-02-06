#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int t[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
    int min = t[0];
    int minCnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (t[i] < min)
        {
            min = t[i];
            minCnt = 1;
        }
        else if (t[i] == min)
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