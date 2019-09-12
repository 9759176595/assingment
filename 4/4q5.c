#include<stdio.h>
#include<math.h>
void main()
{
int x;
for(x>0;x<100;x++){
if((x%3==0)||(x%7==0))
printf("\n%d", x);
}
}