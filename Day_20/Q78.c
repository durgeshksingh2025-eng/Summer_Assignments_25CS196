#include <stdio.h>

int main()
{
    int a[10][10], i, j, row, col, flag = 1;

    printf("Enter rows and columns: ");
    scanf("%d%d", &row, &col);

    printf("Enter matrix elements:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if(row != col)
    {
        printf("Matrix is not symmetric");
    }
    else
    {
        for(i = 0; i < row; i++)
        {
            for(j = 0; j < col; j++)
            {
                if(a[i][j] != a[j][i])
                {
                    flag = 0;
                    break;
                }
            }
        }

        if(flag == 1)
            printf("Matrix is symmetric");
        else
            printf("Matrix is not symmetric");
    }

    return 0;
}