#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// a)
struct Tableau{
	int taille;
	int tab[100];
	
};
// c)
int alea(int n)
{
	
	int N;
	N=rand()%n;
	
	
	return N;}
// d)
struct Tableau initialise(struct Tableau T)        // void initTab (struct Tableau* p)
{												   // {int i;
	int i;										   // (*p).taille =10; p->taille =10;  les deux écritures sont équivalentes
	T.taille=10;								   // for(i=0;i<(*p).taille;i++)
	for(i=0;i<10;i++)							   // {*p).tab[i]=alea(20);}}
	{T.tab[i]=alea(21);}
	return T;
}
// e)
void affiche(struct Tableau T)
{int i;
	for(i=0;i<T.taille;i++)
	{printf ("la case %d du tableau vaut %d \n",i,T.tab[i]);}
}
// f)
int produit(struct Tableau T)
{
	int i, N=1;
	for(i=0;i<T.taille;i++)
	{N*=T.tab[i];}
	return N;
}
// g)
int min(struct Tableau T)
{
	int i, N;
	N=T.tab[0];
	for(i=0;i<T.taille;i++)
	{
		if(T.tab[i]<N) {N=T.tab[i];}
	}	
	return N;
}
// h)
struct Tableau decalage( struct Tableau T)
{
int i;

for(i=T.taille;i>0;i--)
	{
		T.tab[i]=T.tab[i-1];
	}
T.tab[0]=0;
T.taille++;	
	return T;
}
// i) tri à bulle
struct Tableau tri( struct Tableau T)
{
	int i, j,exc;
	
	for(j=0;j<=T.taille;j++)
	
	{
		for(i=(T.taille-1);i>0;i--)
		{
			
			if(T.tab[i]<T.tab[i-1])
			 {	exc=T.tab[i];
				T.tab[i]=T.tab[i-1];
				T.tab[i-1]=exc;
			 }
			
		}
	}
return T;	
}

//j)
struct Tableau insertion (struct Tableau T, int N)
{
	int i=0, j;
	while (N>=T.tab[i])
	{i++;} // l'emplacement ou la valeur doit être insérée
	
	for(j=T.taille;j>i;j--) // on décale toute les valeurs supérieures à la valeur que l'on souhaite insérer
	{
		T.tab[j]=T.tab[j-1];
	}
	T.tab[i]=N;// on insère la valeur
	T.taille++; // on incrémente la taille du tableau
	return T;
}
	

// k)
struct Tableau tri_inverse( struct Tableau T)
{
	int i, j,exc;
	
	for(j=0;j<=T.taille;j++)
	
	{
		for(i=0;i<(T.taille-1);i++)
		{
			if(T.tab[i]<T.tab[i+1])
			{	exc=T.tab[i];
				T.tab[i]=T.tab[i+1];
				T.tab[i+1]=exc;
			}
		}
	}
return T;	
}
// l)
struct Tableau suppr_alea(struct Tableau T)
{
	int i;
	i=alea(T.taille);
	for(i=alea(T.taille);i<(T.taille-1);i++)
	{T.tab[i]=T.tab[i+1];} // on décale toute les valeurs supérieures à la valeur que l'on souhaite supprimer de 1 rang vers la gauche
						   // ce qui a pour effet de supprimer cette valeur et de réduire la taille du tableau de 1
	T.taille--;
	return T;
}

struct Tableau suppr_doublons(struct Tableau T)
{
	int i;
	for (i=0;i<(T.taille-2);i++)
	{if ((T.tab[i]==(T.tab[i+1] ))){(T.tab[i])=-1;}	}
	// il reste à décaler toutes les valeurs en partant de la droite si l'on supprime un doublon pour que le tableau reste trié
	
	return T;
}
	
int main ()
{
	srand(time(NULL));
	struct Tableau B;
	
	printf("la taille de la structure est: %d \n" ,sizeof(B));    // Elle est logiquement de 404, 4 la taille d'un int x100 pour le tableau + l'int taille
	
	B=initialise(B);
	
	/*printf(" le produit des éléments du tableau vaut : %d \n",produit(B));
	  printf(" l'élément le plus petit du tableau vaut : %d \n",min(B));*/
	
	/* B=decalage(B); */
	B=tri(B);
	affiche(B);
	
	//printf("on insère un élément aléatoire \n"); 						B=insertion(B, alea(21));
	
	//printf("on retrie le tableau en sens inverse \n");                B=tri_inverse(B);
	
	//printf("on supprime un élément aléatoire du tableau \n");         B=suppr_alea(B); 
	
	printf (" \n on supprime les doublons \n");
	B=suppr_doublons(B);
	affiche(B);

	
	
return 0;	
}
