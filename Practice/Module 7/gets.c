#include <stdio.h>
#include <string.h>
int main()
{
    char a[13];
    fgets(a,13,stdin);
    printf("%s", a);

    return 0;
}