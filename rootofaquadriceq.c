//
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    double sq1, sq2, ab, abb, ac, acc;
    printf("enter a,b,c\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    sq1 = (b * b) - (4 * a * c);
    sq2 = sqrt(sq1);
    if (sq2 > 0)
    {
        ac = (-b + sq2) / (2 * a);
        acc = (-b - sq2) / (2 * a);
           printf("the solution is %lf and %lf", ac, acc);
    }
    else if (sq2 = 0)
    {
         ac = -b / (2 * a);
        printf("The solution is: %lf\n", ac);
    }
    else
    {
        int realPart,imaginaryPart;
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-sq2) / (2 * a);
        printf("The solutions are: %lf + %lfi and %lf - %lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
    

 
    return 0;
}