#include <stdio.h>
int main()
{
    int n, i, j, a, b, c;
    printf("enter the line number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a = 65;
        b = 1;
        c = i % 2;
        for (j = 1; j <= i; j++)
        {
            char ch = (char)a;
            if (c == 0)
            {
                printf("%4c", ch);
            }
            else
            {
                printf("%4d", b);
            }
            a++;
            b++;
        }
        printf("\n");
    }

    return 0;
}