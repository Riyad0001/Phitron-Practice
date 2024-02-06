#include <stdio.h>
int main()
{

    int n;
    int s = 1;
    int f=(n - 1) / 2 + 6 - 1;
    scanf("%d", &n);
    for (int i = 0; i < (n - 1) / 2 + 6; i++)
    {
        for (int j = 0; j < f; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < s; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}