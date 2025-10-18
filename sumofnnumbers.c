#include <stdio.h>
int main()
{
    int n, num, sum = 0, i;
    printf("how many numbers?\n");
    scanf("%d", &n);
    printf("enter the numbers\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
            sum = sum + num;
    }
    printf("the sum is %2d", sum);
    return 0;
}