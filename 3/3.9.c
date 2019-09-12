#include<stdio.h>
void main()
{
	int a, b, c, d, x;
	printf("enter five digits(four are distinct, one is common)");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &x);
	if(x==a)
		printf("x = a");
	if(x==b)
		printf("x = b");
	if(x==c)
		printf("x = c");
	if(x==d)
		printf("x = d");
}
