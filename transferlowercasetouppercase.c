// transfer lower case to upper case
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[20];
    printf("Enter a sentence\n");
    scanf("%[^\n]s", &str);
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
        printf("%c", str[i]);
        i++;
    }
    return 0;
}