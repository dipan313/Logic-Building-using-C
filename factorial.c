//Factorial
#include <stdio.h>
int factorial(int fac) ;
int main()
{
    int fact, n;
ab:
    printf("Enter the number which factorial you want\n");
    scanf("%d", &n);
    if (n > 0)
    {
        fact = factorial(n);
        printf("the factorial is %d",fact);
    }
    else if (n == 0)
    {
        printf("the factorial is 1");
    }
    else
    {
        printf("Factorial does not possible.Try again");
        goto ab;
    }
    return 0;
}
int factorial(int p)
{
    if(p==1)
    {
        return 1;
    }
    return (p * factorial(p - 1));
}