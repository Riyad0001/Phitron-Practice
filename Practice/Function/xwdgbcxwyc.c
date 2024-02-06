#include <stdio.h>
int main()
{

    double x = 20.56;
    double *ptr = &x;
    double *ptr2 = ptr;
    *ptr2 = 5.89;
    printf("%.2lf", *ptr2);
    return 0;
}