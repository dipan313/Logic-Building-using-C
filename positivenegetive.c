#include<stdio.h>
int main()
{
    float num;
    printf("enter a number\n");
    scanf ("%f",&num);
    if (num>0)
    {
        printf("the number is positive");
    }
    else if(num==0)
        {
            printf("the number is zero");
        }
        else
        {
            printf("the number is negetive");
        }
return 0;
}