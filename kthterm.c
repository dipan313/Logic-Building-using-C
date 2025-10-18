#include<stdio.h>
int main()
{
    int ar[5],i,j,n,ele,size;
    printf("how many elements?\n");
    scanf("%d",&n);
    printf("Enter your elements in array\n");
    for(i=0;i<n;i++)
    {
        printf("enter the element of %d: ",i+1);
        scanf("%d",&j);
        ar[i]=j;
    }
    size=sizeof(ar)/sizeof(ar[0]);
    printf("%d\n",size);
    printf("the kth term of an array is %d",ar[size-1]);
    return 0;

}
