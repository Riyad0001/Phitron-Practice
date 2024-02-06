#include <stdio.h>
#include <string.h>
int main()
{

    char r[21], s[21];
    scanf("%s %s", r, s);
    int v = strcmp(r, s);
    if (v < 0)
    {
        printf("%s\n", r);
    }
    else if (v > 0)
    {
        printf("%s\n", s);
    }
    else
    {

        printf("%s", s);
    }
    return 0;
}