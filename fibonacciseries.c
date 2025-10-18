// fibonacci
#include <stdio.h>
int main()
{
    int n, i, f1 = 0, f2 = 1, f3;
    printf("'enter the number of tearms needed\n");
    scanf("%d", & n);
    printf("the series will be: %d\t%d\t",f1,f2);

    for (i = 2; i < n; i++)
    {
        f3 = f2+f1;
        f1 = f2;
        f2 = f3;
        printf("%d\t", f3);
    }
    
    return 0;
}