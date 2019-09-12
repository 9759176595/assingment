#include<stdio.h>
#include<math.h>
void main()
{
	float a, b, c, slope;
	printf("enter the no:");
	scanf("%f %f %f", &a, &b, &c);
	slope = -a/b;
	printf("slope is %f ", slope);
	if(a==0&&b!=0)
	printf("line is not vertical");
	if(a!=0&&b==0)
	
	printf("line is vertical");
}
