#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the line number\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%4d",j);
        }
        printf("\n");
    }
    return 0;
}
   