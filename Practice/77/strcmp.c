#include <stdio.h>
#include <string.h>
int main()
{

    char s[100], t[100];
    scanf("%s %s", s, t);
    int v = strcmp(s, t);
    if (v == 0)
    {
        printf("same");
    }
    else if (v < 0)
    {
        printf("S choto");
    }
    else
    {
        printf("T choto");
    }
    return 0;
}