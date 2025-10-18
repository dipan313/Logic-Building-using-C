// insert element in an array
#include <stdio.h>
void insert(int arr[100], int pos,int element,int p)
{
    if (pos < 0 || pos > p)
    {
        printf("Invalid position\n");
    }
    else
    {
        for (int i = p; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos] = element;
        p++;
    }
}
int main()
{
    int ar[100], n, position, ele;
    printf("Enter your initial array size\n");
    scanf("%d", &n);
    printf("Enter your initial array\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Now enter the element you want to insert\n");
    scanf("%d", &ele);
    printf("In which position you want to insert it?\n");
    scanf("%d", &position);
   void insert(ar[100], position, ele,n);
    printf("the new array will be: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}