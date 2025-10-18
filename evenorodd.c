//find a given number even or odd
#include<stdio.h>
int main (){
    int n;
    ab:
    printf("Enter a number:\n");
    scanf("%d",&n);
    if(n>0)
    {
        if(n%2==0)
        {
            printf("the number is even\n");
        }
        else
        {
            printf("the number is odd\n");
        }
    }
    else
    {
        printf("Wrong number.Enter positive number only\n");
        goto ab;
    }
     return 0;
}
//END