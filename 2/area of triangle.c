/*calculation of area*/
#include<stdio.h>
#include<math.h>
void main()
{
	float a, b, c, s, area;
	printf("Enter the length of three sides of triangle");
	scanf("%f %f %f",&a, &b,&c);
	s =( a + b + c)/2;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n Area = %f",area);
}
