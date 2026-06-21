#include <stdio.h>

int main()
{
    int a[10][10], t[10][10];
    int i, j, row, col;

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter matrix elements:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Finding transpose
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose of matrix:\n");
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}