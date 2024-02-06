#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int c[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &c[i]);
    }
    int cd[7] = {0};
    for (int i = 0; i < n; i++)
    {
        // int val = c[i];
        cd[c[i]]++;
    }
    // printf(" 0- %d\n 1- %d\n 3- %d\n", cd[0], cd[1], cd[3]);
    for (int i = 0; i < 6; i++)
    {
        printf("%d- %d\n", i, cd[i]);
    }

    return 0;
}