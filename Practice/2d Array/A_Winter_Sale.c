#include <stdio.h>
int main()
{

    int s, t;
    scanf("%d %d", &s, &t);
    float f = 100 - s;
    float g = t / f;
    float h = g * 100;
    printf("%0.2f\n", h);
    return 0;
}