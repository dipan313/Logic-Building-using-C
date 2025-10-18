// evennumbers in a given range
#include <stdio.h>
int main()
{
    int st, end, num, i;
    printf("enter the starting point\n");
    scanf("%d", &st);
    printf("enter the ending point\n");
    scanf("%d", &end);
    printf("the even numbers are: ");
    for (i = st; i <= end; i++)
    {
        num = i % 2;
        if (num == 0)
        {
            printf("%d \n",i);
        }
    }
    return 0;
}