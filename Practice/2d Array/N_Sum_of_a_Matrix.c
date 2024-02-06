#include <stdio.h>
int main()
{

    int row, clm;
    scanf("%d %d", &row, &clm);
    int r[row][clm], s[row][clm], t[row][clm];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clm; j++)
        {
            scanf("%d", &r[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clm; j++)
        {
            scanf("%d", &s[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clm; j++)
        {
            t[i][j] = r[i][j] + s[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clm; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}