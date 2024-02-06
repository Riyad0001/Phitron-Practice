#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        int s[t];
        for (int v = 0; v < t; v++)
        {
            scanf("%d", &s[v]);
        }
        int x[t];
        for (int o = 0; o < t; o++)
        {
            x[o] = s[o];
        }
        for (int j = 0; j < t - 1; j++)
        {
            for (int y = j + 1; y < t; y++)
            {
                if (x[j] > x[y])
                {
                    int tmp = x[j];
                    x[j] = x[y];
                    x[y] = tmp;
                }
            }
        }

        int arr[t];
        for (int r = 0; r < t; r++)
        {
            arr[r] = s[r] - x[r];
        }
        for (int o = 0; o < t; o++)
        {
            printf("%d ", abs(arr[o]));
        }
        printf("\n");
    }

    return 0;
}