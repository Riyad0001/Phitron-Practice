#include <stdio.h>
void ill(int x)
{

    for (int i = 1; i <= x; i++)
    {
        printf("%d", i);

        if (i != x)
            printf(" ");
    }
    printf("\n");
}

int main()
{

    int n;
    scanf("%d", &n);
    ill(n);

    return 0;
}