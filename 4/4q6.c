#include<stdio.h>
#include<math.h>
void main()
{
int x;
for(x>0;x<100;x++){
if((x>50)&&(x<70)||(x<20)||(x>90))
printf("\n%d", x);
}
}