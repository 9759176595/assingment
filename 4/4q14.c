#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	for(x>0;x<100;x++)
	{
		if((x>0&&x<9&&x%2!=0)||(x>20&&x<29&&x%2!=0)||(x>40&&x<49&&x%2!=0)||(x>60&&x<69&&x%2!=0)||(x>80&&x<89&&x%2!=0)||
		(x>10&&x<19&&x%2==0)||(x>30&&x<39&&x%2==0)||(x>50&&x<59&&x%2==0)||(x>70&&x<79&&x%2==0)||(x>90&&x<99&&x%2==0))
	     printf("%d ", x);
		}
	return 0;
}
