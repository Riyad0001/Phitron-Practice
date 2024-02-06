#include <stdio.h>
int loi(char r[], int i)
{

    if (r[i] == '\0')
        return 0;
    int l = loi(r, i + 1);
    return l + 1;
}
int main()
{

    char r[7] = "Heo";
    int length = loi(r, 0);
    printf("%d", length);

    return 0;
}