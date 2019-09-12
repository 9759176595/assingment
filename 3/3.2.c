#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c, d;
	printf("enter values");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	if(a>b && a>c && a>d)
	printf("a is largest no.");
	if(b>a && b>c && b>d)
	printf("b is largest no.");
	if(c>a && c>b && c>d)
	printf("c is largest no.");
	if(d>a && d>b && d>c)
	printf("d is largest no.");
		return 0;
}
