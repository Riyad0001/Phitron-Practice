#include <stdio.h>
int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{

    // int s = sum(12, 121);
    printf("%d\n", sum(12, 10));

    return 0;
}