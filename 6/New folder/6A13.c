#include<stdio.h>
void main()
{
	int i, line;
	char p;
	for(line=1; line<=5;line++)
	{
		for(i=1;i<=line;i++)
		
			printf("%c",96+i);
			for(i=65+line;i<=70;i++)
			printf("%c", i);
			printf("\n");
			
		}
	
	}
