#include <stdio.h>
#include <limits.h>
int di(int r[], int n, int i)
{
    if (i == n)
    {
        return INT_MIN;
    }
    int mx = di(r, n, i + 1);
    if (r[i] > mx)
    {
        return r[i];
    }
    else
    {
        return mx;
    }
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
    int mx = di(r, n, 0);
    printf("%d", mx);
    return 0;
}