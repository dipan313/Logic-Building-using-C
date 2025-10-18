#include <stdio.h>
int main()
{
    int N;
    int i,sum=1;
    scanf("%d",&N);

    for (i=2;i<=N/2;i++)
        {
            if(N%i==0)
                { 
                    sum=i+i;
                    
                }
        }
                if(sum==N)
                    {
                        printf ("the number is perfect");
                    }
                              
                else
                    {
                        printf("the number is not perfect");
                    }
        

    return 0;
}