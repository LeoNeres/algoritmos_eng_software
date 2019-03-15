#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

//Autor: Bruno D'Lucca.
//Questão 8 da Lista.

struct lista{
	int x;
	int y;
};

main()
{
   setlocale(LC_ALL,"Portuguese");
   struct lista l;
   struct lista *pl;
   pl = &l;
   printf("Informe o valor de x:");
   scanf("%i",&pl->x);
   printf("\nInforme o valor de y:");
   scanf("%i",&pl->y);
   printf("\nO valor de X é %i, e Y é %i.", pl->x, pl->y);
   

}


