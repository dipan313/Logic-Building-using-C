#include<stdio.h>
int main(void)
{
    int ar[10]={2,3,6,7,8,5,4,9,1,0},i,j,temp;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(ar[i]>ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d",ar[i]);
    }
}