#include<stdio.h>
void main()
{
int a,b=0,i,n,x=0,p;
printf("enter the n value:");
scanf("%d",&n);
printf("enter the %d numbers:",n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    if (i=(i*i)/2 - (i/2) + 1)
     {
         b=b+a;
     }
}
printf("%d",b);
}







