#include <stdio.h>
void lo(int p[], int r, int i)
{
    if (i == r)
        return;
    printf("%d\n", p[i]);
    lo(p, r, i + 1);
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

    lo(r, n, 0);
    return 0;
}