#include <stdio.h>
int small_to_capital(char x)
{
    // int s = x - 32;
    return x - 32;
}
int main()
{
    char c;
    scanf("%c", &c);
    int val = small_to_capital(c);
    printf("%c", val);

    return 0;
}