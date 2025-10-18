#include<stdio.h>
int main()
{
    int ar[20][20],i,j,k,l,min,row,col;
    printf("how many col?");
    scanf("%d",&col);
    printf("how many rows?");
    scanf("%d",&row);
    printf("Enter the elements to array");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            scanf("%d",ar[i][j]);
        }
        printf("\n");
    }

    
    for(k=0;k<row;k++)
    {
        min=ar[k][0];
        for(l=0;l<col;l++)
        {
            if(min>ar[k][l])
            {
                min=ar[k][l];
            }
            break;
        }
        printf("the minimum element of %dth row is %d ",k,min);
        printf("\n");
    }
    return 0;
}