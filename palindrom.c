//palindrom or not?
#include<stdio.h>
int main()
{
    int num, digit,i, numm, original;
    numm=0;
    printf ("enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        numm=numm*10+digit;
        num=num/10;
    }
    if(original==numm)
    {
        printf("the number is a palindrom number");
    }
    else
    {
        printf("the number is not a palindrom number");
    }
    return 0;
}