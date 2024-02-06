#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int r[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &r[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (r[i] > r[j])
            {
                int tmp = r[i];
                r[i] = r[j];
                r[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", r[i]);
    }

    return 0;
}