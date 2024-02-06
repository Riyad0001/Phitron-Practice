#include <stdio.h>
int main()
{

    int m, n;
    scanf("%d %d", &m, &n);
    int a[m];
    int cnt[n + 1];
    for (int i = 0; i <= n; i++)
    {
        cnt[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", cnt[i]);
    }

    return 0;
}