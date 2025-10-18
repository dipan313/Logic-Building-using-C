#include <stdio.h>
#include<math.h>
int main(void)
{
    int n, div, sum=0, rem,i, ar[50], len,a=0;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    printf("Enter the length of the binary number: ");
    scanf("%d", &len);
    for(i=0;i<len;i++)
    {
        rem=n%10;
        div=n/10;
        n=div;
        sum=sum+rem*pow(2,i);
        
    }
    printf("the decimal number is: %d",sum);
}