#include <stdio.h>
int main()
{
    int year, rem1, rem2;

    printf("Enter a year: ");
    scanf("%d", &year);

    rem1 = year % 4;
    rem2 = year % 100;

    if ((rem1 == 0 && rem2 != 0) || year % 400 == 0)
    {
        printf("The year %d is a leap year.\n", year);
    }
    else
    {
        printf("The year %d is not a leap year.\n", year);
    }

    return 0;
}
