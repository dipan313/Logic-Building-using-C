// minimum of n numbers
#include <stdio.h>
int main()
{
    int n, ar[500], i, min;
    printf("Enter how many number\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    min = ar[0];
    for (i = 1; i < n; i++)
    {
        if (min > ar[i])
        {
            min = ar[i];
        }
    }

    printf("min %d", min);
    return 0;
}