#include<stdio.h>
void main()
{
	int a, b, c, d, e, f, p;
	printf("enter a no:");
	scanf("%d", & a);
	b = a%100;
	p = a/100;
	c = b/10;
	d = b%10;
	e = (d*10 + c);
	f = (p*100 + e);
	printf("the output is :%d", f);
}
	
