#include<stdio.h>
void main()
{
	int x, y, z, k, sum;
	printf("enter the value");
	scanf("%d", &x);
	y = x%10;
	z = x/10 ;
	k = z%10;
	sum = y+k;
	printf("the sum is %d", sum);
}
