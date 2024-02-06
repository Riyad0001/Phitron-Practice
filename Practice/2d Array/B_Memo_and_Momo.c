#include <stdio.h>
int main()
{

    long long int x, y, z;
    scanf("%lld %lld %lld", &x, &y, &z);
    if (x % z == 0 && y % z == 0)
    {
        printf("Both");
    }
    if (x % z == 0 && y % z != 0)
    {
        printf("Memo");
    }
    if (x % z != 0 && y % z == 0)
    {
        printf("Momo");
    }
    if (x % z != 0 && y % z != 0)
    {
        printf("No One");
    }
    return 0;
}