#include<stdio.h>
void main()
{
	int a, b, c, p;
	printf("enter the value of a, b, c, d");
	scanf("%d %d %d %d", &a, &b, &c, &p);
	printf("f(x) = %dx^2 + %dx + %d", a, b, c);
	printf("f(%d) = %d", p,a*p*p + b*p +c);
}

