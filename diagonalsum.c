// diagonal element sum of a matrix
#include <stdio.h>
int main()
{
    int ar[50][50], i, col, row, k, sum = 0;
    printf("Enter the row of the matrix\n");
    scanf("%d", &row);
    printf("Enter the col of the matrix");
    scanf("%d", &col);
    printf("\nnow enter the elements of the matrix\n");
    for (i = 0; i < row; i++)
    {
        for (k = 0; k < col; k++)
        {
            scanf("%d", &ar[i][k]);
             if (i == k)
            {
                sum += ar[i][k];
            }
        }
    }
    printf("your matrix is \n");
    for (i = 0; i < row; i++)
    {
        for (k = 0; k < col; k++)
        {
            printf("%d", ar[i][k]);
           
        }
        printf("\n");
    }
    printf("sum of the diagonal elements is : %d",sum);
    return 0;
}