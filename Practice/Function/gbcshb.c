#include <stdio.h>
void lol(char *ar)
{
    ar[0] = 'u';
}
int main()
{

    char ar[20] = "Hello";
    lol(ar);
    printf("%s ", ar);

    return 0;
}