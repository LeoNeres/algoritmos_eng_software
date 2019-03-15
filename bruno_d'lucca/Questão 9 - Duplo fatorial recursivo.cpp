#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

//Autor: Bruno D'Lucca.
//Questão 9 da Lista. Duplo fatorial recursivo! 

int x;

int fatrec(int x)
{
	if(x == 1)
	{
		return 1;
	}
	else if(x%2 != 0)
	{
		x = x * fatrec(x-2);
		return x;
	}

}

int main()
{
	setlocale(LC_ALL,"portuguese");
	printf("Digite um numero: ");
	scanf("%i",&x);	
	x = fatrec(x);
	printf("\nDuplo fatorial é: %i\n",x);
}
