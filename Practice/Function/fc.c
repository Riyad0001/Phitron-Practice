#include <stdio.h>
int char_to_ascii(char x)
{
    int s = x;
    return s;
}

int main()
{
    char p;
    scanf("%c", &p);
    int val = char_to_ascii(p);
    printf("%d", val);

    return 0;
}