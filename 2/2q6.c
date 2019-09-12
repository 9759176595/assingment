#include<stdio.h>
#include<math.h>
void main()
{
float a, b, c, rad, centre,x,y;
printf("enter the values:");
scanf("%f %f %f", &a, &b, &c);
x = -a/2;
y= -b/2;
rad = sqrt((a/2)*(a/2) +(b/2)*(b/2) - c);
printf("the centre is (%f,%f)", x,y);
printf("rad is %f", rad);
}
