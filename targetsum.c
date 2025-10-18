// target sum
#include <stdio.h>
int main()
{
    int ar[50], target, i, j, sum, n ;
    printf("enter your target\n");
    scanf("%d", &target);
    printf("how many number?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter %dth number: \n", i + 1);
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            sum=ar[i]+ar[j];
            if(sum==target)
            {
                printf("the target come after sumation of the positions of %d\t%d",i,j);
                break;
            }
           
        }
    }

    return 0;
}