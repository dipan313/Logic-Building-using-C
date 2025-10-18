#include<stdio.h>
int main ()
{   int n;
    printf("enter a year ");
    scanf ("%d",&n);
    if (n%4==0){
        printf("leapyear");
    }
    else{
        printf("not");
    }
    return 0;
}