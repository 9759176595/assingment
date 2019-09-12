#include<stdio.h>
void main()
{
	int x;
	for(x>0;x<100;x++)
	{
		if((x>10&&x<29&&x%2==0)||(x>40&&x<59&&x%2==0)||(x>70&&x<89&&x%2==0))
		printf("%d ", x);
	}
	
	
}
