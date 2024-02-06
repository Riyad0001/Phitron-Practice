#include <stdio.h>
int main()
{

    int n, k;
    scanf("%d %d", &n, &k);
    int s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] < s[j])
            {
                int tmp = s[j];
                s[j] = s[i];
                s[i] = tmp;
            }
        }
    }
    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] < 0)
        {
            continue;
        }
        else
        {
            sum = sum + s[i];
        }
    }
    printf("%lld", sum);
    return 0;
}