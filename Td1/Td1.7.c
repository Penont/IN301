#include <stdio.h>
#include <stdlib.h>

int main ()
{
int n;
float res=0.00,a=0.00,N,b;


printf(" entrez un nombre :");
scanf("%d",&n);
res=n*0.50;
N=n*1.00;
b=N;


while (((res*res)>=(N+0.01))||((res*res)<=(N-0.01)))
{
if((res*res)>=(N+0.01))
{
	b=res;
	res=(a+b)/2;
}
if((res*res)<=(N-0.01))
{
	a=res;
	res=(a+b)/2;
	
	
}
}
printf("la racine carree de %d à 0.01 pres est %f",n,res);
return 0;	
}
