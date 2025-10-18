#include<stdio.h>
int main()
{   
    int num, rem, count = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        rem = num % 10;
        if (rem == 0) // check if remainder is 0
        {
            count++;
        }
        num = num/10; // update num by removing the last digit
    }
    printf("There are %d zeros in the number", count);
    return 0;
}
