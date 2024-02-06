#include <stdio.h>
void pi(int i)
{
    if (i == 1)
    {
        printf("%d", i);
        return;
    }
    printf("%d ", i);
    pi(i - 1);
}
int main()
{

    int n;
    scanf("%d", &n);
    pi(n);
    return 0;
}