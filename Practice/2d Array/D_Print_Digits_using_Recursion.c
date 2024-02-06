#include <stdio.h>
void vai(int n)
{
    if (n == 0)
        return;
    int x = n % 10;
    vai(n / 10);
    printf("%d ", x);
}
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int p;
        scanf("%d", &p);
        vai(p);
        if (p == 0)
        {
            printf("0");
        }
        printf("\n");
        }

    return 0;
}