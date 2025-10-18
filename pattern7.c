#include <stdio.h>
int main()
{
    int n, i, a,b, j;
    printf("enter the line number\n");
    scanf("%d", &n);
     a = n ;
     b=1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
           
            if (j == a || j==1 || i == a || i==1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}