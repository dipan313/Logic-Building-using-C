#include <stdio.h>

int main()
{
    int n, arr[20], i, j, dist[20], flag, fr[20], k = 1;

    printf("How many numbers?\n");
    scanf("%d", &n);

    printf("Enter numbers\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    dist[0] = arr[0];
    for (i = 1; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < k; j++)
        {
            if (arr[i] == dist[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            dist[k++] = arr[i];
        }
        printf("distinct elements are : \n");
           for (i = 0; i < k; i++)
            printf("%d\t", dist[i]) ;
    }
     return 0;
}