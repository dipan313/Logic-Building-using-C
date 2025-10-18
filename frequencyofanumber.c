// frequncy of a number
#include <stdio.h>
int main()
{
    int n, n2, num, i, div, j, ar[50], rem, temp[50], printed[50];
    printf("Enter how many number?\n");
    scanf("%d", &n);
    printf("enter the number\n");
    scanf("%d", &num);
    for (i = 0; i < n; i++)

    {
        rem = num % 10;
        div = num / 10;
        num = div;
        ar[i] = rem;
        temp[i] = 1;
        printed[i] = 0;
    }
    // n2 = sizeof(ar[50]);
    // printf("%d\n", n2);
    int flag;
    for (j = 0; j < n; j++)
    {
        flag = 0;
        int k = 1;
        for (i = j + 1; i < n; i++)
        {
            if (ar[j] == ar[i])
            {
                k++;
                flag = 1;
            }
        }
        if (flag == 1)
        {
            temp[j] = k;
            // break;
        }
    }
    printf("the frequency of the number is ");
   for (i = 0; i < n; i++)
    {
        if (printed[ar[i] - 1] == 0)
        {
            printf("\n%d-%d ", ar[i], temp[i]);
            printed[ar[i] - 1] = 1;
        }
    }
    return 0;
}