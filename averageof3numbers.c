//average of 3 numbers and is sum positive or not?
#include<stdio.h>
int main()
{
    float a, b, c, sum, avg;
    printf("Enter 3 numbers\n");
    scanf("%f %f %f",&a ,&b ,&c);
    sum = a+b+c;
    avg= sum/3;
    printf("The average of this 3 numbers is%f\n",avg);
    if (sum>0)
            {
                printf("the sum is positive");
            }
    else
        
        if (sum==0)
            {
                printf("the sum is 0");
            }
    
        else
        {
            printf("the sum is negetive");
        }
    return 0;
}