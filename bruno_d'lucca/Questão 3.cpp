#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

//Autor: Bruno D'Lucca.
//Questão 3 da Lista.

main()
{
   setlocale(LC_ALL,"Portuguese");
   int i,j;
   int b[3][3];
   int a[3][3] = {10,12,14,16,18,22,24,26,28};
   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
   	{
   		b[j][i] = a[i][j];
   		printf("[%d]",b[i][j]);
	}
   }
   
   
}


