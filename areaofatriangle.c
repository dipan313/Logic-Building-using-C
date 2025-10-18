//find the area of any triangle
#include<stdio.h>
#include<math.h>
int main ()
{    float a,b,c,s,area;
    top:
    printf("enter the sides of the triangle one by one\n");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c&&(a+c)>b&&(b+c)>a)
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("the area of the triangle is %f",area);
    }
    else
    {
        printf("With this value of the sides, a triangle is not possible.So put right values of the sides which can form a triangle.\n");
        goto top;
    }
    return 0;
}
//END