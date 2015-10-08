#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int N=1, i=2, n, nbrprem=0;
	printf("entrez votre nombre : \n");
	scanf("%d" ,&N);
	
	n= (N/2) +1;
	while (i<n)
	{
	if(N%i==0){	printf("%d n'est pas un nombre premier car il est divisible par %d \n",N,i);i=n;nbrprem=1;}
	else {i++;}
		
	}
	if(nbrprem==0){printf("%d est un nombre premier \n",N);}
	
	
	
	return 0;
}
