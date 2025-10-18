//sum of all digits of a given number
#include <stdio.h>
int main()
{
    int n, rem,div,i,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for(;n!=0;n/10)
    {
        rem=n%10;
        sum=sum+rem;
    }
    printf("the sum of all digits of the number is: %d",sum);
    return 0;
}
