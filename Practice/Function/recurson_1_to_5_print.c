#include <stdio.h>
void pro(int i)
{
    if (i == 6)
        return;
    printf("%d\n", i);
    pro(i + 1);
}
int main()
{

    pro(1);

    return 0;
}