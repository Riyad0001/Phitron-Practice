#include <stdio.h>
int main()
{

    int row, colm;
    scanf("%d %d", &row, &colm);
    int r[row][colm];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            scanf("%d", &r[i][j]);
        }
    }
    // int e;
    // scanf("%d", &e);
    // for (int i = 0; i < colm; i++)
    // {
    //     printf("%d ", r[e][i]);
    // }
    int l;
    scanf("%d", &l);
    for (int i = 0; i < row; i++)
    {
        printf("%d ", r[i][l]);
    }

    return 0;
}