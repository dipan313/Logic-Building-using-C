#include<stdio.h>
int main ()
{
    int n, i,arr[20],sum;
    printf("how many numbers you want to sum?\n");
    scanf("%d",&n);
    printf("\nenter the numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
        printf("the sum is %d",sum);
    return 0;
}