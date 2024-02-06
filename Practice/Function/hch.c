#include <stdio.h>
int count_odd(int x[], int y, int *z)
{
    *z = 0;
    for (int i = 0; i < y; i++)
    {
        if (x[i] % 2 != 0)
        {
            (*z)++;
        }
    }
}
int main()
{

    int n;
    scanf("%d", &n);
    int s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }
    int odd_count;

    count_odd(s, n, &odd_count);
    printf("%d", odd_count);

    return 0;
}