#include<stdio.h>
int main ()
{
    int a, b;
    a=9;
    b=10;
    a=b+a;
    b=a-b;
    a=a-b;
    printf("b=%d, a=%d",b,a);
    return 0;
}