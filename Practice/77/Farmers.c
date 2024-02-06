#include <stdio.h>
int main()
{

    int r;
    scanf("%d", &r);
    for (int i = 0; i < r; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int w = d * m1;
        int r = d * (m1 + m2);
        int day = w / (m1 + m2);
        printf("%d\n", d - day);
    }

    return 0;
}