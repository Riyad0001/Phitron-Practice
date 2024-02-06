#include <stdio.h>
void lol(int *p)
{
    // printf("%d", *p);
    *p = 78776;
}
int main()
{

    int x = 10;
    lol(&x);
    printf("%d", x);
    return 0;
}