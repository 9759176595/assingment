#include<stdio.h>
#include<math.h>
void main()
{
	int x1, x2, y1, y2, d;
	printf("enter the value of x1:");
	scanf("%d", &x1);
	printf("enter the value of x2:");
	scanf("%d", &x2);

	 printf("enter the value of y1:");                                                                                     scanf("%d", &y1);
	  printf("enter the value of y2:");                                                                                     scanf("%d", &y2);  
	d = sqrt((x2-x1)^2 + (y2-y1)^2);
	printf("the value of d is %d", d);
}
