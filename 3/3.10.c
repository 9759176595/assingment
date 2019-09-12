#include<stdio.h>
#include<math.h>
void main()
{
	int a, b, c, d, x, count=0;
	printf("enter the values");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &x);
	if(a==x)
		count++;
	
	if(b==x)
		count++;
	if(c==x)
		count++;
	if(d==x)
		count++;
	printf("%d  ", count);
}
	
