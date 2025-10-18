//eligible for vote or not?
#include<stdio.h>
int main()
{
    int age;
    printf("what is your age?\n");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("you are eligible to vote");
    }
    else
    {
        printf("you are not eligible to vote");

    }
    return 0;
}