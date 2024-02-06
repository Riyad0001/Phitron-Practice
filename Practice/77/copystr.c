#include <stdio.h>
#include <string.h>
int main()
{

    char s[199], t[199];
    scanf("%s %s", s, t);
    // for (int i = 0; i <= strlen(t); i++)
    // {
    //     s[i] = t[i];
    // }
    strcpy(s, t);
    printf("%s %s", s, t);

    return 0;
}