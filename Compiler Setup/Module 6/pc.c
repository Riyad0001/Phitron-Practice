#include <stdio.h>
int main()
{

    int num, i;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % 2 == 0)
        {
            printf("%d\n", num);
        }
        else
        {
            printf("-1");
        }
    }
    return 0;
}