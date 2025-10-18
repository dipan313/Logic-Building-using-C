#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ar,i,min,max,j,k,n;
    printf("how many numbers?\n");
    scanf("%d",&n);
    ar=(int*)malloc(sizeof(int)*n);
    printf("Enter elements to array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    max=ar[0];
    min=ar[0];
    for(j=1;j<n;j++)
    {
        if(max<ar[j])
        {
            max=ar[j];
        }
        if(min>ar[j])
        {
            min=ar[j];
        }
    }
    printf("the maximum value of the array is %d",max);
    printf("the minimum value of the array is %d",min);
    return 0;
}