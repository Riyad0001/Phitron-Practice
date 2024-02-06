#include <stdio.h>
int main()
{

    int row, clm;
    scanf("%d %d", &row, &clm);
    int z[row][clm];
    int cnt = 0;
    int mat = row * clm;
    for (int i = 0; i < row; i++)
    {
        for (int l = 0; l < clm; l++)
        {
            scanf("%d", &z[i][l]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int l = 0; l < clm; l++)
        {
            if (z[i][l] == 0)
                cnt++;
        }
    }
    if (mat == cnt)
    {
        printf("This is Zero Matrix");
    }
    else
    {
        printf("Not a Zero Matrix This");
    }
    return 0;
}