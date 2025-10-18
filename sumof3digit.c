#include<stdio.h>
int main()
{
    int num,rem,sum=0,i;
    printf("enter three digit number\n");
    scanf("%d",&num);
    if(num<999 && num>99)
    {
       for(i = num; i != 0; i = i/10)
        {
            rem = i % 10;
            sum += rem;
        }
        printf("the sum is %d\n",sum);
        if(sum>15)
        {
            printf("the sum is greater than 15");
        }
        else
        {
            printf("the sum is not greater than 15");
        }
        
    }
    else
    {
        printf("enter a valid 3 digit number");
    }
return 0;
}