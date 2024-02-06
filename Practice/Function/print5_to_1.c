#include <stdio.h>
void ms(int i)
{
    if (i == 6)
        return;
    ms(i + 1);
    printf("%d\n", i);
}
int main()
{

    ms(1);
    return 0;
}