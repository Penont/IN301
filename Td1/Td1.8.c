#include <stdio.h>
#include <stdlib.h>

int main ()
{
int U,x=0,n;
printf(" entrez le premier terme de la suite :\n");
scanf("%d",&U);
printf(" entrez le nombre d'itérations que vous souhaitez afficher :\n");
scanf("%d",&n);

while (U!=1)
{
x++;
if(U%2==0){U=U/2;}
else{U=(3*U)+1;}
if(x<(n+1)){printf("le terme U %d vaut %d \n",x,U);}
}
if(x>(n+1)){printf("le terme U %d vaut %d \n",x,U);}
return 0;
}
