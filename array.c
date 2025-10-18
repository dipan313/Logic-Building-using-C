#include<stdio.h>
int main ()
{
    int num,rem,div,rev;
    printf("enter a number\n");
    scanf("%d",&num);
    rem=num%10;
    div=num/10;
    rev=rem*10+div;
    if (rev==num)
    {
        printf("palindrom");
    }
    else
    {
        printf("not palindrom");
    }
    return 0;
       
}