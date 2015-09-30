#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int entree,h,m,s;
	
	printf("entrez la durée en secondes : \n");
	scanf("%d" ,&entree);
	
	h=entree/3600;
	m=(entree%3600)/60;
	s=entree%60;
	printf("%d corresponds à %d heures, %d minutes, %d secondes" ,entree,h,m,s);
	
	
	
	
	return 0;
}
