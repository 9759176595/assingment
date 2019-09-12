#include<stdio.h>
void main()
{
	int x, y, z;
	printf("enter the values");
	scanf("%d %d %d", &x, &y, &z);
	if(x>y && x>z)
	       printf("x is largest no.");
	else
	{
	if(y>x && y>z)
	printf("y is largest no.");
	else
	{ 
	if(z>x && z>y)
	printf("z is largest no.");
	}
	}
}


