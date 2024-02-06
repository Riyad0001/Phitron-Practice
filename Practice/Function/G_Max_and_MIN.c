#include <stdio.h>
void lol(int p[], int x)
{

    int min = p[0];
    int max = p[0];
    for (int i = 1; i < x; i++)
    {
        if (p[i] < min)
        {
            min = p[i];
        }
        if (p[i] > max)
        {

            max = p[i];
        }
    }

    printf("%d %d", min, max);
}
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    lol(a, n);

    return 0;
}