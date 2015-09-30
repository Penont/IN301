#include <stdio.h>
#include <stdlib.h>

int main()
{
	int blanc,nbr=0,i;
	
	for(i=0;i<10;i++)
	{
		blanc=10-nbr;
		while (blanc>0)
		{
			printf(" ");
			blanc--;
		}
		printf("*\n");
		nbr++;
	}
	
	
	
	return 0;
}
