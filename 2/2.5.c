#include<stdio.h>
#include<math.h>
void main()
{
	int a, b, c, d, e;
	float distance;
	printf("enter the inputs");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	distance = (a*c+b*d+e)/sqrt(c*c + d*d);
	printf("distance is %f", distance);
	
}
