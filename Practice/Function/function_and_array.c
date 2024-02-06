#include <stdio.h>
int lol(int *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", s[i]);
    }
}

int main()

{

    int s[5] = {10, 3, 55, 554, 434};
    lol(s, 5);

    return 0;
}