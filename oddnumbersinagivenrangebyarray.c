#include <stdio.h>

int main()
{
    int n, ar[50], i, odd, count = 0;

    printf("Enter the value of n:\n ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter %dth number:\n", i + 1);
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < n; i++)
    {
        odd = ar[i] % 2;
        if (odd == 0)
            printf("the number %d is not odd\n", ar[i]);

        else
        {
            count++;
            printf("the number %d is odd\n", ar[i]);
            
        }
    }
    printf("number of odd numbers is %d", count);
    return 0;
}
