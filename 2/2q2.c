#include<stdio.h>
#include<math.h>
void main()
{
	int a, b, c, d;
	float distance;
	printf("enter the input:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	distance = sqrt((c-a)*(c-a) + (d-b)*(d-b));
	printf("the distance is:%f", distance);
}
