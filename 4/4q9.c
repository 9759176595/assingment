#include<stdio.h>
#include<math.h>
void main()
{
int x, d;
for(x>0;x<100;x++)
{
if((d=x%10)&& d%3==0)
printf("\n%d", x);

}
}
