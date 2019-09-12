#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b;
	printf("enter values");
	scanf("%f %f", &a, &b);
	if(a>b)
	printf("no are %f %f", a, b);
	else
	printf("no are %f %f", b, a); 
	return 0;
}
