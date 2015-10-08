#include <stdio.h>
#include <stdlib.h>

int main ()
{
	
	float Sn2=0.00,n=1.0,Sn1=-1.00,E;
	printf("rentrez la précision de la limite : \n");
	scanf("%f",&E);
	
	while (Sn2-Sn1>E)
	{
		Sn1=Sn2;
		Sn2=(Sn2+(1/(n*n)));
		n++;
	}
	printf( "la suite vaut: %f \n", Sn2);
	
return 0;	
}
