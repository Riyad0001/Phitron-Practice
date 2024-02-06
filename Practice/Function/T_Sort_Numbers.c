#include <stdio.h>
void fun(int a[])
{

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {

                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
}

int main()
{
    int c[3], tmp[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &c[i]);
        tmp[i] = c[i];
    }

    fun(c);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", tmp[i]);
    }

    return 0;
}