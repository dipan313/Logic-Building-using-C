//swapping a given number
#include<stdio.h>
int main()
{
    int n,rem,i,temp,sum;
    printf("enter a number\n");
    scanf("%d",&n);
    for (i=0;i<=0;i++)
    {
        rem=n%10;
        temp=rem;
        temp=temp/10;
        sum=sum*10+rem;
    }
    printf("the swaped number is %d",sum);
    
    return  0;
}