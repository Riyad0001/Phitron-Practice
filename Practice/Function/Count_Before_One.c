#include <stdio.h>
int count_before_one(int x[], int y)
{
    int cnt = 0;
    for (int i = 0; i < y; i++)
    {
        if (x[i] == 1)
        {
            return cnt;
        }
        cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    scanf("%d", &n);
    int r[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &r[i]);
    }
    int result = count_before_one(r, n);
    printf("%d", result);

    return 0;
}