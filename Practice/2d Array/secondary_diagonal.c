#include <stdio.h>
int main()
{

    int row, clm;
    scanf("%d %d", &row, &clm);
    int z[row][clm];
    for (int i = 0; i < row; i++)
    {
        for (int l = 0; l < clm; l++)
        {
            scanf("%d", &z[i][l]);
        }
    }
    int flag = 1;
    if (row != clm)
    {
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clm; j++)
        {
            if (i + j == clm - 1)
            {
                continue;
            }
            if (z[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("Secondary Diagonal");
    }
    else
    {
        printf("Not Diagonal");
    }

    return 0;
}