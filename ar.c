#include<stdio.h>
int main()
{
	int a[5] = {1,1,20,25,65};
	int x, y,z;
	x = ++a[1];
	y = a[1]++;
	z = a[x++];
	printf("%d\t%d\t%d",x,y,z);
	return 0;
}