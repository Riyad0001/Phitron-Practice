#include <stdio.h>
void li(int i)
{
    if (i == 0)
        return;
    printf("%d\n", i);
    li(i - 1);
}
int main()
{

    li(6);
    return 0;
}