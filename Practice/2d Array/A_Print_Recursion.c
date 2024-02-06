#include <stdio.h>
void gi(int i)
{
    if (i == 0)
    {
        return;
    }
    printf("I love Recursion\n");
    gi(i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    gi(n);
    return 0;
}