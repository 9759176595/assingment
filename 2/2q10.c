#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float h, k, r, s, y1, y2, d;
	printf("enter the values");
	scanf("%f %f %f %f", &h, &k, &r, &s);
	y1 = k+sqrt(r*r-(s-h)*(s-h));
	y2 = k-sqrt(r*r-(s-h)*(s-h));
	d = y2-y1;
	if(d<0)
	d = -d;
	else
	d = d;

	printf("dis is %f ", d);
	
	return 0;
}

