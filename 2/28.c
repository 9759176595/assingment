#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c,  x, y ,p;
	printf("enter the values");
	scanf("%f %f %f", &a, &b, &c);
	x = (b*b+c*c-a*a)/(2*b*c);
	printf("the angle in degree is%f", x);
	y = acos(x);
	p = (y*180)/3.14;
	printf("the angle in rad is %f",p);
	return 0;
}
