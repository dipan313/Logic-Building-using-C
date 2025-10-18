#include <stdio.h>
int main()
{
    int n, i, j;
    printf("enter the line number\n");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {   
        int a=65;
        for (j = 1; j <= i; j++)
        {         
           char ch = (char)a;
            printf("%4c", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}