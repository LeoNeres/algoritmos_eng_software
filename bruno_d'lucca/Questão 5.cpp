#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

//Autor: Bruno D'Lucca.
// Questão 5 da Lista.

int func(int v[], int n){
	if(n==0)
	{
		return 5;
	}
	else
	{
		int s;
		s = func(v, n-1);
		if(v[n-1]>0)
		{
			s = s + v[n-1];
		}
		return s;
	}
}

main()
{
   setlocale(LC_ALL,"Portuguese");
   int v[6]={3,-5,7,0,-3,4};
   int n=6;
   int r;
   r = func(v,n);
   printf("Resultado = %i",r);
      
}
