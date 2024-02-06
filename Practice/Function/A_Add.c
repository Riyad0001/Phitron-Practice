#include <stdio.h>
int funl(int a, int b)
{
    int sum = a + b;
    printf("%d", sum);
}
int main()
{

    int x, y;
    scanf("%d %d", &x, &y);
    funl(x, y);
    return 0;
}