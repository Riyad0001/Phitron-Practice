#include <stdio.h>
void lo(int i)
{
    if (i == 0)
    {
        return;
    }
    lo(i - 1);
    printf("%d\n", i);
}
int main()
{

    int n;
    scanf("%d", &n);
    lo(n);
    return 0;
}