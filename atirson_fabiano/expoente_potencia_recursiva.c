/* 
Autor: Atirson Fabiano
Construa um algoritmo que apresente uma função recursiva que dado dois números, e para
expoente e p para potência, e calcule a potenciação de um número inteiro; */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#include <iostream>
using namespace std;

int pow(int base, int expoente) {
	if (expoente==0)
		return 1;
	return base * pow(base,expoente-1);
}
int main() {
	int x,base,expoente;
	cout << "Informe a base e o expoente:" << endl;
	cin >> base >> expoente;
	x = pow (base,expoente);
	cout << "Resultado:" << x;
	return 0;
}
