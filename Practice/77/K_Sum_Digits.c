#include <stdio.h>
#include <string.h>
int main()
{

    int n;
    scanf("%d", &n);
    char r[n];
    scanf("%s", r);
    int len = strlen(r);

    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        int value = r[i] - 48;
        sum = sum + value;
    }
    printf("%d", sum);

    return 0;
}