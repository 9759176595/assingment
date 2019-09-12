#include<stdio.h>
#include<math.h>
void main()
{
	float a, b, c;
	printf("enter the no:");
	scanf("%f %f %f", &a, &b, &c);
	if(a*a == b*b + c*c )
	printf("the triangle is right angled");
	else
	printf("triangle is not right angled");
	
}
