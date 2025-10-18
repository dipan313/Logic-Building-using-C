#include <stdio.h>
int main()
{
    int n, i, a, j;
    printf("enter the line number\n");
    scanf("%d", &n);
     a = n / 2 + 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
           
            if (j == a || i == a)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}