#include <stdio.h>
void r(int x)
{
    x = 100;
}

int main()
{

    int x = 10;
    r(x);
    printf("%d", x);
    return 0;
}