//determind of a matrix
#include<stdio.h>
int main()
{
    int mt[50][50],i,j,col,row;
    printf("enter col & row\n");
    scanf("%d %d",&col,&row);
    printf("enter the elements");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            scanf("%d",&mt[i][j]);
           
        }
       
    }
    printf("the matrix is \n");
     for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            
            printf("%d\t",mt[i][j]);
        }
        printf("\n");
    }

    printf("the determinant is \n");
     for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            
        }
        printf("\n");
    }
    return 0;
}