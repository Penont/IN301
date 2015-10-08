#include <stdio.h>
#include <stdlib.h>

int main()
{
	int X,Y,i,SX=0,SY=0;
	printf("entrez les deux nombres : \n");
	scanf("%d %d" ,&X,&Y);
	
	for(i=1;i<((X/2)+1);i++)
	{
		if (X%i==0){SX=SX+i;}
	}
	
	if (SX==Y)
	{
		for(i=1;i<((Y/2)+1);i++)
		{
		if (Y%i==0){SY=SY+i;}
		}
		
		if(SY==X){printf("les nombres %d et %d sont amis", X, Y);}
		
	}
	else  {printf("les nombres %d et %d ne sont pas amis", X, Y);}
return 0;
}
