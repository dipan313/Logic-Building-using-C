#include<stdio.h>
int main()
{
    int n,ar[50],i,num,k;
    printf("how many numbers?\n");
    scanf("%d",&n);
    printf("Enter element to the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {   for(k=i+1;k<n;k++)
        {
              if(ar[i]==ar[k])
                 {
                    printf("%d\t",ar[i]);
                    break;
                }
        }
      
    }
    return 0;
}