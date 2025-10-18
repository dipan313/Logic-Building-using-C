#include <stdio.h>
int main()
{
    int n, k, i, a, j;
    printf("enter the line number\n");
    scanf("%d", &n);
    a = 1;

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf("  ");
        }

        for (j = 1; j <= a; j++)
        {
            printf("* ");
        }
        a = a + 2;
        printf("\n");
    }
    return 0;
}