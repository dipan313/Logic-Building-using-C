// finding upper case letter of a string
#include <stdio.h>
#include <string.h>
int main()
{
    int n, i;
    char str[20];
    printf("enter any word\n");
    scanf("%[^\n]s", &str);
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            printf("%c", str[i]);
           
        }
         i++;
    }
    return 0;
}
