#include <stdio.h>
void po(int p[], int n, int x)
{
    if (x < 0)
    {
        return;
    }
    if (x % 2 == 0)
    {
        printf("%d ", p[x]);
    }
    po(p, n, x - 1);
}
int main()
{

    int n;
    scanf("%d", &n);
    int p[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    po(p, n, n - 1);

    return 0;
}