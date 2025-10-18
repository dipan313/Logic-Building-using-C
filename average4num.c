#include<stdio.h>
int main()
{
    float a,b,c,d,avg,sum;
    printf("enter 4 number\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    sum=a+b+c+d;
    avg=sum/4;
    if(avg>100)
    {
        printf("the avg is greter than 100\n ");
    }
    else
    {
        printf("the avg is not greater than 100\n");
    }
    return 0;
}