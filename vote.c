#include<stdio.h>
int main()
{
    int age;
    printf ("emter your age\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are eligable for vote");

    }
    else
    {
        printf("you are not eligable for vote");
    }
    return 0;

}