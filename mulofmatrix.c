// multipication of two matrix
#include <stdio.h>
int main()
{
    int mt[50][50], i, j, col, row, col1, row1, mtt[50][50], mul[50][50];
    printf("enter col & row for 1st matrix\n");
    scanf("%d %d", &col, &row);
    printf("enter the elements of 1st matrix\n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            scanf("%d", &mt[i][j]);
        }
        printf("\n");
    }

    printf("enter col & row for 2nd matrix\n");
    scanf("%d %d", &col1, &row1);
    printf("enter the elements for 2nd matrix\n");
    for (i = 0; i < col1; i++)
    {
        for (j = 0; j < row1; j++)
        {
            scanf("%d", &mtt[i][j]);
        }
        printf("\n");
    }
    printf("the 1st matrix is \n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {

            printf("%d\t", mt[i][j]);
        }
        printf("\n");
    }
    printf("the 2nd matrix is \n");
    for (i = 0; i < col1; i++)
    {
        for (j = 0; j < row1; j++)
        {

            printf("%d\t", mtt[i][j]);
        }
        printf("\n");
    }
    int n1, n2;
    n1 = sizeof(mt[50][50]);
    n2 = sizeof(mtt[50][50]);
    printf("the size of the matrixs are \n%d\t%d", n1, n2);
    if (row == col1)
    {
        printf("\nthe sum of the two matrix are:\n ");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col1; j++)
            {
                for (k = o; k < col; k++)
                {
                    mul[i][j] = mt[i][k] * mtt[k][j];
                }
                // mul[i][j] = (mt[i][j] * mtt[j][i])+(mt[i+1][j] * mtt[j][i+1]);
            }
            break;
        }

        for (i = 0; i < col; i++)
        {
            for (j = 0; j < row; j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("the size of the matrixs are different.put the same size matrix\n");
    }

    return 0;
}