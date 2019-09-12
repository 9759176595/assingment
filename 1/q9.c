#include<stdio.h>
void main()
{
	int x, y, z;
	printf("enter the value");
	scanf("%d", &x);
	y = x%10;
	z = (x/100 + y);
	printf("the output is: %d", z);
}
