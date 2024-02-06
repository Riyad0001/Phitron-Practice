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
            if (i + j == row - 1)
            {
                if (z[i][j] != 1)
                {
                    flag = 0;
                }
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
        printf("Unit M");
    }
    else
    {
        printf("Not U Mat");
    }

    return 0;
}