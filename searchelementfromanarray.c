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
    printf("what you are looking for?\n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {   for(k=0;k<n;k++)
        {
              if(ar[i]==ar[k+1])
                 {
                    printf("%d",ar[i]);
                    break;
                }
        }
      
    }
    return 0;
}