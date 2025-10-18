#include <stdio.h>
int factorial(int fac);
int main()
{
    int start,track=0, n, i, fact;
    float sum = 0;
    start = 4;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    fact = factorial(start);
    sum = sum + (1 / fact);
    while (start <= n)
    {
        start = start + 2;
        if (track == 0)
        {
            fact=factorial(start);
            sum=sum-(1/fact);
            track++;
        }
        else
        {
            fact=factorial(start);
            sum=sum+(1/fact);
            track--;
        }
    }
    printf("the series will be: %f",sum);
    return 0;
}
int factorial(int facto)
{
    if(facto==0)
    return 1;
    else
    return (facto*factorial(facto-1));
}