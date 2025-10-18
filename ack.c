#include <stdio.h>
int ackerman(int m, int n);

int main()
{
    int a = ackerman(3,2);
    printf("%d", a);
    return 0;
}

int ackerman(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if ((m != 0) && (n == 0))
    {
        return ackerman(m - 1, 1);
    }
    else
    {
        return ackerman(m - 1, ackerman(m, n - 1));
    }
}