#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int X=0,Y=0,Y2=0;
	printf("entrez le premier nombre : \n");
	scanf("%d" ,&X);
	printf("entrez le deuxième nombre : \n");
	scanf("%d" ,&Y);
	
	while (X>1)
	{
		if(X%2==0)
		{
		X=X/2; Y=Y*2;
		}
		else
		{
		X--; Y2=Y2+Y;	
		}
		printf("= %d x %d +%d \n", X,Y,Y2);
	}
	X=Y+Y2;
	printf("= %d \n", X);
	
	return 0;
}
