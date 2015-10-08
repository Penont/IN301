#include <stdio.h>
#include <stdlib.h>

void swap_useless (int a, int b)
{
	int c;
	
	c=a;
	a=b;
	b=c;
}
int* reinitPointeur()
{  return NULL;}



int main ()
{
	int T[10];
	char C[7][3];
	char tab[10];
	char (*p)[10] = &tab;
	
	printf(" les valeurs de tailles affichees sont données en octets \n");
	
	printf("a) taille de char: %d \n",sizeof(char));
	printf("   taille de int: %d \n" ,sizeof(int));
	printf("   taille de double: %d \n" ,sizeof(double));
	printf("   taille de char*: %d \n" ,sizeof(char*));
	printf("   taille de void*: %d \n" ,sizeof(void*));
	printf("   taille de int*: %d \n" ,sizeof(int*));
	printf("   taille de double*: %d \n" ,sizeof(double*));
	printf("   taille de int**: %d \n" ,sizeof(int**));
	printf("   taille de int[10]: %d \n" ,sizeof(T));
	printf("   taille de char[7][3]: %d \n \n" ,sizeof(C));
  /*printf("   taille de int[]: %d \n" ,sizeof(int[]) */
	
	printf("   taille de tab: %d \n" ,sizeof(tab));
	printf("   taille de tab[0]: %d \n" ,sizeof(tab[0]));
	printf("   taille de &tab[0]: %d \n" ,sizeof(&tab[0]));
	printf("   taille de *&tab: %d \n" ,sizeof(*&tab));
	printf("   taille de *&tab[0]: %d \n \n" ,sizeof(*&tab[0]));
	
	printf("   taille de p: %d \n" ,sizeof(p));
	printf("   taille de *p: %d \n" ,sizeof(*p));
	printf("   taille de (*p)[2]: %d \n" ,sizeof((*p)[2]));
	printf("   taille de &(*p)[2]: %d \n" ,sizeof(&(*p)[2]));
	
	int a = 1; 
	int* v = &a; 
	printf("\n p vaut %p \n", v);
	v=reinitPointeur();
    printf(" p vaut ensuite %p \n", v);
	
	
	
	return 0;
	}
